//Demonstrates how write and read data to a binary file in sequence
//either one value at a time or entire array at once.
//Rikard Grossman-Nielsen 29th jul 2024
#include <fstream>
#include <iostream>
using namespace std;

int main(void){
    float numbers[16]={0.1222, 1.2322, 2.982933, 3.13242,
                        18.39, 18.23, 25.2332, 6.78966, 
                        20.34, 45.89, 65.435, 67.894,
                        12.43, 56.78, 12.456, 45.789
                    };
    float dataReadFromDisc[16];
    int usrChoice, i;

    cout << "Choose the way you wish to write the array of numbers to the binary file:\n";
    cout << "1. Write the float numbers to binaryfile one value at a time\n";
    cout << "2. Write the float numbers to the binaryfile all at once\n";
    cout << "3. Read the contents of the written binary file number by number\n";
    cout << "4. Read the contents of the written binary file all at once\n";
    cout << "Please note that you should run alternative 1 or 2 to create binary file first.\n";
    cout << "When you have done that you can run the program again as many times as you like to read\n";
    cout << "the binary file using alternative 1 or alternative 2.\n";
    cout << "Please input user choice:\n";
    cin >> usrChoice;
    if(usrChoice==1){
        ofstream myBinFile("fileFloatNums.bin", ios::out|ios::binary);
        //write value to binary file one value at time
        if(myBinFile.is_open()){
            for(i=0; i<16; i++)
                myBinFile.write((char*)numbers, sizeof(float));
        }
        myBinFile.close();
    }
    if(usrChoice==2){
        //write value of entire array at once to binary file.
        ofstream myBinFile("fileFloatNums.bin", ios::out|ios::binary);
        if(myBinFile.is_open()){
            myBinFile.write((char*)numbers, 16*sizeof(float));
        }
        myBinFile.close();
    }
    if(usrChoice==3){
        //read the contents of the binary file number by number
        ifstream myBinFile("fileFloatNums.bin", ios::in|ios::binary);
        if(myBinFile.is_open()){
            for(i=0; i<16; i++)
                myBinFile.read((char*) &dataReadFromDisc[i], sizeof(float));
        }
        myBinFile.close();
        for(i=0; i<16; i++)
            cout << dataReadFromDisc[i] << " ";
    }
    if(usrChoice==4){
        //read all of the contents of the binary file at once
        ifstream myBinFile("fileFloatNums.bin", ios::in|ios::binary);
        if(myBinFile.is_open()){
            myBinFile.read((char*) &dataReadFromDisc, 16*sizeof(float)); 
        }
        myBinFile.close();
        for(i=0; i<16; i++)
            cout << dataReadFromDisc[i] << " ";
    }
    if( (usrChoice<1) && (usrChoice>4) )
        cout << "Wrong user input!";
    return 0; 
}