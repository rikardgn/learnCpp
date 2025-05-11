//C++ example that demonstrates how to use pass by pointer
//Pass by pointer if useful when a function needs to work on larger ammounts of data since
//No local copy of the data is created inside the function.
//Its also more effictient from a computational standpoint since creating copys leads to more computations
//and thus less efficency
//Rikard Grossman-Nielsen 11th may 2025
using namespace std;
#include <iostream>

double mult_1_5(double* x){
    return x*1.5;
}

int main(){
    double number=26.25;
    double retVal;
    retVal=mult_1_5(number);
    cout << retVal;
}
