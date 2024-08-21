//Demonstrates how to use offset to change get position in binary file
//Reads 4 characters at a few specified intervals specified using offset
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    char * fileChars;
    int i;
    fileChars = new char[4];
    ifstream myBinFile("example2.bin",ios::in|ios::binary);
    if(myBinFile.is_open()){
        myBinFile.seekg(4,ios::beg);
        myBinFile.read(fileChars, 4);
        cout << "Output of the the chars after first offset of 4 position from filestart:\n";
        for(i=0; i<4; i++)
            cout << fileChars[i];
        myBinFile.seekg(8,ios::beg);
        myBinFile.read(fileChars, 4);
        cout << "\nOutput of the the chars after first offset of 8 position from filestart:\n";
        for(i=0; i<4; i++)
            cout << fileChars[i];
        cout << "\n";
        myBinFile.close();
    }
    return 0;
}