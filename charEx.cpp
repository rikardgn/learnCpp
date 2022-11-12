//This examples demonstrates how to use char variables in C++
//It also converts a lowercase letter to uppercase later by subtracting 32 from the letter, if
//you enter a lowercase letter, it will output an uppercase letter.
//Howecver if you don't enter a lowercase letter it will produce an error message.
using namespace std;
#include <iostream>
int main(void){
    char chrPressedLowCase, chrPressedUpCase;
    cout << "Enter a lower case letter and this program will output its uppercase variant" << "\n";
    cin >> chrPressedLowCase;
    if(chrPressedLowCase>='a' && chrPressedLowCase<='z'){
        chrPressedUpCase = chrPressedLowCase - 32;
        cout << "The upper case variant of the lower case letter you entered is: " << "\n";
        cout << chrPressedUpCase << "\n";
    }
    else{
        cout << "You didn't enter a lower case letter";
        exit(0);
    }

    return 0;
}