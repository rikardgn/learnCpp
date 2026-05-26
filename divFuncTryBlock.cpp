//Demonstrates how to throw an logic exception if you divide by zero
#include <stdexcept>
#include <iostream>
//function thats throw an invalid argument exception if you try to divide by zero.
double div(double nominator, double denominator){
    if(denominator==0.0)
        throw std::invalid_argument("can't divide by zero!");
    return nominator/denominator;
}

int main(){
    double nominator, denominator, qouta;
    std::cout << "Enter a nominator in decimal format:" << "\n";
    std::cin >> nominator;
    std::cout << "Enter a denominator in decimal format:" << "\n";
    std::cin >> denominator;
    try{
        qouta = div(nominator, denominator);
    }
    catch(std::invalid_argument &e){
        std::cout << "Invalid argument: " << e.what();
    }
    if(denominator!=0.0)
        std:: cout << qouta;
    return 0;
}