//This program shows basic i/o and how to write an hello world program in C++
//Here im using to string stream more to separe user input from data conversion
using namespace std;
#include <iostream>
#include <string>
#include <sstream>

int main(void){
    string inpStr;

    int myNum;
    cout << "Please enter an integer beetwen 1 and 10" << "\n";
    getline(cin,inpStr);
    stringstream(inpStr) >> myNum;
    if(myNum >10 ){
        cout << "Number entered is larger than 10!" << "\n";
    }
    else{
        cout << "Numbered entered is 10 or smaller." << "\n"; 
    }
    return 0;
}