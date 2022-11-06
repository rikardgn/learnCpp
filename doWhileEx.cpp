//Example of Do While
//Do while is a loop variant you use,
//when you don't know how many iterations a loop will do, but you want it to make at least one iteration
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void){
    int vectorInt[2], i;
    bool newNumberGen = false;
    //variable type to store Time
    time_t nTime;
    srand( (unsigned) time(&nTime) );
    vectorInt[0]=rand()%10;
    do{
        vectorInt[1]=rand()%10;
        if( vectorInt[0]!=vectorInt[1] ){
            newNumberGen=true;
        }
    }while(newNumberGen==false);
    
    for(i=0; i<2; i++)
        cout << vectorInt[i]; 
    
    return 0;
}
