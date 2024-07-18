//Shows example of how to use probability based random number generation
#include <iostream>
#include <chrono>
#include <random>
int main(){
    int inpChoice, i;
    double p_unfair_coin_toss;
    std::cout << "Enter choice:\n";
    std::cout << "1. prefdeined seed of 123\n";
    std::cout << "2. random seed using number of seconds since 1970\n";
    std::cout << "enter input choice:\n";
    std::cin >> inpChoice;
    if(inpChoice==1){
        auto const seed=123;
        auto randomGen=std::mt19937(seed);
        std::cout << "enter probability value for unfair coin";
        std::cin >> p_unfair_coin_toss;
        auto coin_flip_val=std::bernoulli_distribution(p_unfair_coin_toss);
        for(i=0;i<10;i++){
            if( coin_flip_val(randomGen) ){
                std::cout << "heads\n";
            }
            else{
                std::cout << "tails!\n";
            }
        }
    }
    if(inpChoice==2){
        auto const seedTicks=std::chrono::system_clock::now().time_since_epoch().count();
        auto randomGen=std::mt19937(seedTicks);
        std::cout << "enter probability value for unfair coin toss \n";
        std::cin >> p_unfair_coin_toss;
        auto coin_flip_val=std::bernoulli_distribution(p_unfair_coin_toss);
        std::cout << "Coin toss results:\n";
        for(i=0;i<10;i++){
            if( coin_flip_val(randomGen) ){
                std::cout << "heads\n";
            }
            else{
                std::cout << "tails!\n";
            }
        }
    }
    else{
        std::cout << "Incorrect input!";
    }

    return 0;    
}