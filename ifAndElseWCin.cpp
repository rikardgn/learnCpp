//This program shows basic i/o and how to write an hello world program in C++
using namespace std;
#include <iostream>
int main(void){
    int myNum;
    cout << "Please enter an integer beetwen 1 and 10" << "\n";
    cin >> myNum;
    if(myNum >10 ){
        cout << "Number entered is larger than 10!" << "\n";
    }
    else{
        cout << "Numbered entered is 10 or smaller." << "\n"; 
    }
    return 0;
}