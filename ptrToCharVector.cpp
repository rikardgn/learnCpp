//Demonstates how to use a pointer and function to change a char arr/string to uppercase
//Rikard Grossman-Nielsen
//17th Jan 2023
#include <iostream>
using namespace std;
void charVecToUpper(char *ptrC);

int main(void){
    int i;
    char chrVector[]="hello";


    cout << "Char vector before use of function:" << "\n";
    i=0;
    while(chrVector[i]!='\0'){
        cout << chrVector[i];
        i++;
    }
    cout << "\n";

    charVecToUpper(&chrVector[0]);

    //print each char of chrVector before and after upperCase converstion
    cout << "Char vector after use of function:" << "\n";
    i=0;
    while(chrVector[i]!='\0'){
        cout << chrVector[i];
        i++;
    }
    cout << "\n";

    return 0;
}

void charVecToUpper(char *ptrChr){
    int i=0;
    while(ptrChr[i]!='\0'){
            *(ptrChr+i)=*(ptrChr+i)-32;
        i++;
    }
}