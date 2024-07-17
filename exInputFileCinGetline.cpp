//This example shows how to use both getLine and the extraction operator ">>" 
//to read a text file in C++
//Rikard Grossman-Nielsen 16th july
using namespace std;
#include <iostream>
#include <fstream>
int main(){
    std::string strLine;

    int inpChoice;
    std::ifstream inpFile("exNameFile.txt");
    cout << "Please choose file input method\n";
    cout << "1.read text strings input method\n";
    cout << "2.getline file input method\n";
    cout << "please input your choice:\n";
    cin >> inpChoice;
    if(inpChoice==1){
        if(inpFile){
            while(inpFile){
                inpFile >> strLine;
                cout << strLine << "\n";
            }
        }
    }
    if(inpChoice==2){
        if(inpFile){
            while( getline(inpFile, strLine))
                cout << strLine << "\n";
        }
    }
    if( (inpChoice!=1) && (inpChoice!=2) ){
        cout << "wrong input choice!\n";
    }
}