//Simple example how to create a pointer to int
#include <iostream>
using namespace std;
int main(void){
    int* ptrToInt;
    int num=20;
    ptrToInt=&num;

    //printing of values
    cout << "The variable num has the value:" << "\n";
    cout << num << "\n";
    cout << "The pointer ptrToInt contains the adress of num and thus points to the variable num" << "\n";
    cout << "Contents of ptrToInt:" << "\n";
    cout << ptrToInt << "\n";
    cout << "By using the derefeence operator you can find the value cotained at the adress of the var num" << "\n";
    cout << "By using the derefrence operator on the pointer ptrToInt you vill get the value:" << "\n";
    cout << *ptrToInt << "\n";
    return 0;
}