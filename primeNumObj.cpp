//C++ program to create primenumber object if a number is a prime number
//Shows how to dynamically create class with pointer to classType and the keyword new.
//credits to https://github.com/PengTianxiang2007/C_Basic_Functions/blob/main/isPrime.c
//for algorithm to determine if number is a prime number
#include <iostream>

int isPrime(int a){
        int i;
        for(i=2;i<a;i++){
            if (a%i==0){
                return 0;
            }
        }
        return 1;
}

class primeNum{
    protected:
        int primeNumber;
    public:
        primeNum(int primeNumber){
            primeNum::primeNumber=primeNumber;
        }

        int retPrimeNum(){
            return primeNumber;
        }
};

int main(){
    int myNum;
    //Dynamically created primeNum class
    primeNum *myPrime;

    std::cout << "Enter a number to check if is a prime number. If is a primenumber a prime number object will be created!\n";
    std::cout << "Enter number:\n";
    std::cin >> myNum;
    if( isPrime(myNum) == 1){
        myPrime = new primeNum(myNum);
        std :: cout << "The entered number is prime! Created a prime number object!\n";
        int retNum=myPrime->retPrimeNum();
        //std :: cout << "The method retPrimeNumber on object myPrime returns " + myPrime -> retPrimeNum() + " " + "\n";
    }
    else{
        std::cout << "The entered number is not a prime! No prime number object created!";
    }

    primeNum num1(13);
}