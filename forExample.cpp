//Example of for-loop
//This program uses a for-loop out put five lines with the world hello world!
#include <iostream>
using namespace std;
int main(void){
    int i;
    //For is used when you know how to perform a number of iterations
    //This loop does something for i 0..4 and breaks when I reaches 5.
    for(i=0; i<5; i++){
        cout << "Hello World!" << "\n";
    }
    return 0;
}