//This program illustrates how to use while in c++
//While is used when you dont know how many times an iterattion will take place.
//The function getchar reads a character from the terminal and returns it value
#include <iostream>
using namespace std;
int main(){
    char ch;
    int dummy=0;
    cout << "This loop will terminate when you enter the letter x!" ;
    while( (ch=getchar()) != 'x' ){
        dummy++;
        dummy--;
    }
    cout << "You entered x! Program will now terminate!";
    return 0;
}