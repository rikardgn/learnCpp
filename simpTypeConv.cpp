//A simple c++ program that showt how to do implict type conversion
//It also demonstrates what happens if you try to fit a large number into a smaller type
//with implict type conversion.
using namespace std;
#include <iostream>
int main(){
    int usrChoice;
    cout << "Please enter choice:\n";
    cout << "1.Implicit conversion short->int\n";
    cout << "2.Implict conversion small float->int\n";
    cout << "3.Implicit conversional large float->int\n";
    cout << "Enter your choice:\n";
    cin >> usrChoice;

    if(usrChoice==1){
        short shortNum;
        int intNum;
        cout << "Short can house numbers beetween -32767 and 32767\n";
        cout << "Int can house the same range of numbers\n";
        cout << "Usually implicit type conversion beetween works without problem\n";
        cout << "Enter a number beetwen -32767 and 32767:\n";
        cin >> shortNum;
        intNum = shortNum;
        cout << "You entered a short the value: " << shortNum << "\n";
        cout << "This value was converted using implicit type conversion to a int with the value:" << intNum << "\n"; 
        return 0;
    }
    if(usrChoice==2){
        float smallFloatNum;;
        int intNum;
        cout << "";
        cout << "When a small float is converted to int the decimal part is discarded\n";
        cout << "Here i recommned that you dont exceed floats of 32768.999..";
        cin >> smallFloatNum;
        intNum = smallFloatNum;
        cout << "You entered the float value: " << smallFloatNum << "\n";
        cout << "This value was converted using implicit type conversion to a int with the value:" << intNum << "\n"; 
        return 0;
    }
    if(usrChoice==3){
        float largeFloatNum=9.75e12;
        int intNum;
        cout << "Here a large float will be converted to int using an implict type conversion";
        cout << "The floating point to be converted is the large number" << largeFloatNum << "\n";
        intNum = largeFloatNum;
        cout << "The implicitly converted value is: " << largeFloatNum << "\n";
        cout << "The resulat int value after conversion is: " << intNum << "\n";
        cout << "This problem is called overflow since an int can't house such a large floatingpoint number." << "\n";
        return 0;
    }
    if( (usrChoice<1) && (usrChoice>3) ){
        cout << "Wrong input please enter a number beetween 1 and 3!";
        return 0;
    }
}