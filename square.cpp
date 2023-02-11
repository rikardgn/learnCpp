//Class that represent a square
//Rikard Grossman-Nielsen
//21 jan 2023
#include <iostream>
using namespace std;
class square{
    protected:
        double side;
    public:
        square(double side){
            square::side=side;
        }
        double retArea(){
            return side*side;
        }
        double retCircum(){
            return 4*side;
        }
        void setSide(double side){
            square::side=side;
        }
};

int main(void){
    square sqSmall(4.6);
    square sqLarge(27.3);
    cout << "Area of square with side of 4.6 " << "\n" << sqSmall.retArea() << "\n";
    cout << "Area of square with side of 27.3" << "\n" << sqLarge.retArea() << "\n";
    return 0;
}