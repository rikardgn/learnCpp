//A program that takes values of radius from a file,
//prints thea area, diametre and  circumference to the screen
//Finally the program writes the the results of the calculations
//to another file
//This program uses sequential file i/o
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#define PI 3.1456

double calcArea(double* radius){
    return PI**radius**radius;
}

double calcCircumf(double* radius){
    return 2*PI**radius; 
}

double calcDiam(double* radius){
    return 2**radius;
}

using namespace std;
int main(){
    ifstream inpFile("fileI.txt");;
    double radius, areaCirc, circumCirc, diamCirc;
    int i;
    std::string fileOutpLine;


    vector <double> vectRadius;
    std::string inpLine;
    if(inpFile){
        while(getline(inpFile, inpLine) ){
            //convert std:strin to c_string in order to be able to convert it a char ptr
            const char *a=inpLine.c_str();
            //convert contents of char pointer to a double and add it to the vector
            vectRadius.push_back(atof(a));
        }
    }

    for(i=0; i<vectRadius.size(); i++){
        cout << "Circle with radius=" << vectRadius[i] << "\n";
        cout << "diametre=" << calcDiam(&vectRadius[i]) << "\n";
        cout << "circumference=" << calcCircumf(&vectRadius[i]) << "\n";
        cout << "area=" << calcArea(&vectRadius[i]) << "\n";
        cout << "\n";
    }

    ofstream outpFile("fileCircleDataOutp.txt");
    if(!outpFile){
        cout << "fileCirctleDataOutp.txt cant be opened for writing!";
        return 1;
    }

    for(i=0; i<vectRadius.size(); i++){
        diamCirc=calcDiam(&vectRadius[i]);
        outpFile << to_string(diamCirc) << "\n";
        circumCirc=calcCircumf(&vectRadius[i]);
        outpFile << circumCirc << "\n";
        areaCirc = calcArea(&vectRadius[i]);
        outpFile << areaCirc << "\n";
    }
    return 0;
}