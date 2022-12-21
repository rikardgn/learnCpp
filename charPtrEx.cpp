//This example demonstrates how to use char pointers sending data to a simple function
#include <iostream>
using namespace std;
char lowToUpCase(char* charP);

int main(void){
    char chrPressed, chrUpCase, *charPt;
    cout << "Press lower case char to be converted to upperCase:" << "\n";
    cin >> chrPressed;
    charPt=&chrPressed;
    chrUpCase=lowToUpCase(charPt);
    cout << "Upperchar of pressed lowerchar:" << "\n";
    cout << "\n";                        
}
char lowToUpCase(char* charP){
    if( *charP>='a' && *charP<='z'){
        return *charP-32;
    }
    return '*';
}