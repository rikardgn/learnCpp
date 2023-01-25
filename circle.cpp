//Class that represent a circle
//Rikard Grossman-Nielsen
//21 jan 2023
#include <iostream>
using namespace std;
#define PI 3.141592
 class circle{
    protected:
        double radius;
    public:
        circle(double radius){
            circle::radius=radius;
        }
        
        double retRadius(){
            return radius;
        }

        double retDiam(){
            return 2*radius;
        }

        double retArea(){
            return PI*radius*radius;
        }

        double retCirumference(){
            return 2*PI*radius;
        }

        void setRadius(double radius){
            circle::radius=radius;
        }
};

int main(void){
    circle cricSmall(8.7);
    circle circLarge(24.8);
    cout << "Area for circle with radius of 8.7" << "\n" << cricSmall.retArea() << "\n";
    cout << "Area for circle with radius of 24.8" << "\n" << circLarge.retArea() << "\n";
    return 0;
}