//C++ example that demonstrates how to use pass by value for passing a value to a function
//Passing by value is suitable to use when a function processes a smaller ammount
//of data since passing by value creates a local copy inside the function of the data
//it works on.
//Passing by value can also be good for beginners since it doesn't involve the use of pointers
//Rikard Grossman-Nielsen 17th april 2025
using namespace std;
#include <iostream>

double mult_1_5(double x){
    double a;
    a=x*1.5;
    return a;
}
int main(){
    double number=26.25;
    double retVal;
    retVal=mult_1_5(number);
    cout << retVal;
}