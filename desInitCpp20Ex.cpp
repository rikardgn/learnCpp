//Example of designated initalizers in standard C++ 20
//Designated intializers makes code more readble since it makes the programmer
//explicitly state how values are created when creating a new object.
//This explicitness may also reduce the risk of entering the iniatlization
//data in the wrong order when creating a new object. 
//If you enter the iniatlization data in the wrong order an error may occur at compile time.
//Rikard Grossman-Nielsen
#include <string>

//This class represent a regular point in 3D coordinate system.
struct Point{
    double x;
    double y;
    double z;
};

int main(){
    Point p1{.x=3.50, .y=4.68, .z=-1.50};
    Point p2{.x=2.20, .y=6.21, .z=0.00};
    Point p3{.x=5.62, .y=7.80, .z=1.50};
    //If you uncomment this line you may get a compile error
    Point p4{.x=5.62, .z=8.89, .y=3.78};

    return 0;
}