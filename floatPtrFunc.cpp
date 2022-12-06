//Simple example of how to use a float pointer to a function that makes calculations
#include <iostream>
#define PI 3.1415926
using namespace std;

float areaCircle(float* radius);

int main(void){
    float* ptrToFloat;
    float radius=3.45, areaC;
    ptrToFloat=&radius;
    //continue here - 6dec 17.25 2022
    areaC=areaCircle(ptrToFloat);
    cout << "The radius of the circlce is:" << "\n";
    cout << radius << "\n";
    cout << "The function areaCirle returns the answer:" << "\n";
    cout << areaC << "\n";
    
    return 0;
}

float areaCircle(float* radius){
    return PI*(*radius)*(*radius);
}