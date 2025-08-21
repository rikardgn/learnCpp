#include <iostream>
#include <concepts>

//Exampel that demonstrates how to check if something is convertible to double,
//and if that number is convertible to double multiply by 2.5
template <typename T>
double mult2_5(const T& number){
    if constexpr( std::convertible_to<T, double>){
        double dblVal=number;
        return 2.5*number;
    }
    else{
        return 0.0;
    }
}

int main(){
    std::cout << "double(5.5)" << "gives output: " << "\n" << mult2_5(5.5) << "\n";
    std::cout << "double(8)" << "gives output: " << "\n" << mult2_5(8) << "\n";
    std::cout << " double(two cats) " << "gives output: " << "\n" << mult2_5("two cats") << "\n";
    return 0;
}