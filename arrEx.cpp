//This example demonstrates how to use simple arrys in C++ and how to calculate a very simple sum of an array
#include <iostream>
using namespace std;

int main(void){
    int intArr[5][2],sum=0;
    int i,j;
    
    
    //fill the fist row of the array with multiples of 5
    intArr[0][0]=5;
    for(i=1; i<5; i++){
        intArr[0][i]=(i+1)*5;
    }

    //fill the second row of the array with multiples of 5
    intArr[1][0]=10;
    for(i=1; i<5; i++){
        intArr[1][i]=(i+1)*10;
    }

    
    //sum the numbers of the array
    for(int j=0; j<2; j++){
        for(i=0; i<5; i++){
            sum=sum+intArr[j][i];
        }
    }
       
    //print the vector
    cout << "Numbers of first row of the array" << "\n";
    for(j=0; j<2; j++){
        for(int i=0; i<5; i++){
            cout << intArr[j][i] << " ";
        }
        cout << "\n";
    }
    
    //print the sum
    cout << "Sum of the array:" << "\n";
    cout << "Sum: " << sum << "\n";
    

    return 0;
}