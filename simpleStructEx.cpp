//This example shows to declare simple structs in C++.
#include <iostream>
using namespace std;

struct point3D{
        float xCrd;
        float yCrd;
        float zCrd;
} pnt3D;

int wrtContentsPt(point3D point1);

int main(void){
    int res;
    
    pnt3D.xCrd = 3.5;
    pnt3D.yCrd = 2.1;
    pnt3D.zCrd = 1.8;
    res = wrtContentsPt(pnt3D);

    return 0; 
}

int wrtContentsPt(point3D point1){
    cout << "Coordinates of the point" << "\n";
    cout << point1.xCrd << "\n";
    cout << point1.yCrd << "\n";
    cout << point1.zCrd << "\n";
    return 0;
}