//This example demonstrates how to use simple vectors in C++ to calculate a very simple sum
#include <iostream>
using namespace std;

int main(void){
    int intVect[5],sum=0;
    int i;
    intVect[0]=5;
    
    //fill the vector with multiples of 5
    for(i=1; i<5; i++){
        intVect[i]=(i+1)*5;
    }
    
    //sum the numbers of the vector
    for(i=0; i<5; i++){
        sum=sum+intVect[i];
    }
        
    //print the vector
    cout << "Numbers of the vector:" << "\n";
    for(int i=0; i<5; i++){
        cout << intVect[i] << " ";
    }
        
    cout << "\n";
    
    //print the sum
    cout << "Sum of vector:" << "\n";
    cout << "Sum: " << sum << "\n";
    
    return 0;
}