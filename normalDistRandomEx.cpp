//june 19th 2024
//june 23rd 2024 - fix incorrect names, add seed that uses the chrono::ticks function to obtain a more random distribution of numbers. 
//This example illustrates how the choice of seed affects the randomness of numbers in random number generates, 
//that generates random numbers according to a normal distribution
//Rikard Grossman-Nielsen
#include <random>
#include <iostream>
#include <chrono>
using namespace std;
int main(){
    int seedChoice;
    int i;
    //auto const seedUsrChoice;
    //auto const seedTicks;
    //25th june 2024, add random generation to the other if blocks, the codes has to be added within each if block due to the visability of the auto key word.
    cout << "You have three choices regarding seed value that will affect how random your output will be" << "\n";
    cout << "1.Use predfined seed of 123" << "\n"; 
    cout << "2.Enter your own integer value for seed" << "\n";
    cout << "3.Use number of seconds passed since 1970, this will give the most randomly distributed values." << "\n";
    cout << "Please enter your choice:" << "\n";
    cin >> seedChoice;
    if(seedChoice == 1){
        auto const seed=123;
        auto randomGen=std::mt19937{seed};
        double const var_mu=3.0;
        double const var_sigma=0.4;
        auto normVal= std::normal_distribution<double>{var_mu,var_sigma};
        for(int i=0;i<10; i++){
            auto value=normVal(randomGen);
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
    if(seedChoice == 2){
        int usrDefSeed;
        cout << "Enter your preferred seed:" << "\n";
        cin >> usrDefSeed;
        auto const seed=usrDefSeed;
        auto randomGen=std::mt19937{seed};
        double const var_mu=3.0;
        double const var_sigma=0.4;
        auto normVal = std::normal_distribution<double>{var_mu,var_sigma};
        for(int i=0;i<10; i++){
            auto value=normVal(randomGen);
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
    if(seedChoice == 3){
        auto const ticksSeed=std::chrono::system_clock::now().time_since_epoch().count();
        auto randomGen=std::mt19937{ticksSeed};
        double const var_mu=3.0;
        double const var_sigma=0.4;
        auto normVal = std::normal_distribution<double>{var_mu,var_sigma};
        for(int i=0;i<10; i++){
            auto value=normVal(randomGen);
            std::cout << value << " ";
        }
        std::cout << "\n";
    }
    
}

