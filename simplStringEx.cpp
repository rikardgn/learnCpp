//Simple examples that shows how to declare strings and working with strings in C++
#include <iostream>
#include <string>
using namespace std;
int main(void){
    string strName1="Mary", strName2="Bob", strRes;
    //this is char array and not a string in C++ but a character array can be converted to a string 
    char cArr[]="hello how are you?";
    //Converts char array string in C++
    strRes=cArr;
    cout << "Hello " << strName1 << " and " << strName2 << "\n";
    //print cArr as charArr
    cout << "cArr=" << cArr << "\n";
    //print cArr converted to a string
    cout << "strRes=" << strRes << "\n";
    
    return 0;
}