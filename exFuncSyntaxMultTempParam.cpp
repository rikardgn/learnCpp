//Example of functional syntax and multiple parameters
//Rikard Grossman-Nielsen 11th oct 2025
#include <iostream>
#include <concepts>

template <typename name1, typename name2>
concept SubtractDivisableMult = requires (name1 w, name2 u){
    w-u;
    w/u;
    w*u;
};

int main(){
    
    if( SubtractDivisableMult<int, long>){
        std::cout << "int is add/div/mult with long\n";
    }
    
    if(!SubtractDivisableMult<long, std::string>){
        std :: cout << "std::string is not add/mult/div with long\n";
    }

    if(!SubtractDivisableMult<int, std::string>){
        std :: cout << "std::string is not add/mult/div with int\n";
    }
}