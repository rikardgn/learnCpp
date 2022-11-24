//This example shows to declare arrays of simple structs in C++.
#include <iostream>
using namespace std;

struct point3D{
        float xCrd;
        float yCrd;
        float zCrd;
} pointsIn3d[3];

int wrtContentsPt(point3D point1);

int main(void){
    int res, i;
    //set data of four points in the array
    pointsIn3d[0].xCrd = 3.5;
    pointsIn3d[0].yCrd = 2.0;
    pointsIn3d[0].zCrd = 1.0;

    pointsIn3d[1].xCrd = 4.5;
    pointsIn3d[1].yCrd = 2.0;
    pointsIn3d[1].zCrd = 1.0;

    pointsIn3d[2].xCrd = 5.5;
    pointsIn3d[2].yCrd = 2.0;
    pointsIn3d[2].zCrd = 1.0;

    for(i=0; i<3; i++){
        res = wrtContentsPt(pointsIn3d[i]);
    }

    return 0; 
}

int wrtContentsPt(point3D point1){
    cout << "Coordinates of the point" << "\n";
    cout << point1.xCrd << "\n";
    cout << point1.yCrd << "\n";
    cout << point1.zCrd << "\n";
    return 0;
}