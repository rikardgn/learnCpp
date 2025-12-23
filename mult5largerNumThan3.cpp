//Shows how to throw a logical exception when trying to multipl 5 with a number smaller than 4.
#include <iostream>
#include <stdexcept>


int mult5ByLargerNumThan3(int a){
    if(a<4){
        throw std::invalid_argument{"Cannot multiply 5 with smaller number than 4\n"};
    }
    return 5*a;
}

int main(){
    
    int a, b=0;
    std::cout << "enter a number thats 4 or lager to be multiplied by 5: ";
    std::cin >> a;
    try{
        b=mult5ByLargerNumThan3(a);
    }catch(std::invalid_argument& e){
        std::cout << "Invalid Arguement: " << e.what();
    }
    if(b>15){
        std::cout << "5*" << a << "=" << b << "\n";
    }
    
}