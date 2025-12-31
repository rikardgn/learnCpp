//A short example that shows how to close files and do exceptions handling by defining
//a custom terminate handler that's passed to std::set_terminate()
//Usually files are closed anyway 
//So consider this just as an example of exceptions handling
//std::flush is also called to make sure the error message is output to console;
#include <cstdio>
#include <exception>
#include <fstream>
#include <iostream>


using namespace std;
std::ofstream outpFile;


//A custom terminate Handler that closes a files before doing other things
void terminateHandler(){
    outpFile.close();
    int res=remove("asciiList.txt");
    std::cout << "User requested to write zero A's to file thus the file is closed, removed and the program is aborted" << std::flush;
    std::abort();
}

int main(){
    //check if file exits
    std::ifstream strFileCheck("asciiList.txt");
    if(strFileCheck){
        //if file exists delete file
        int res = remove("asciiList.txt");
        if(res!=0){
            std::cout << "Error deleting file!";
            exit(0);
        }
    }
    else{
        outpFile.open("asciiList.txt", std::ofstream::out | std::ofstream::app);
    }
    int numA, i;
    std::cout << "enter numer of the ascii charcter 'a' to be written to the file:\n";
    cin >> numA;
    if(numA<=0)
        terminateHandler();
    if(numA==1){
        outpFile << "a";
        outpFile.close();
    }

    if(numA>=1){
        for(i=0; i<numA; i++)
            outpFile << "a";
        outpFile.close();
    }
}