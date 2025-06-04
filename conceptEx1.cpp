//Concepts are used to give templates constraints. Concepts amongst other things makes template code more readable.
//It also produces compiler errors that are more "human friendly".
//Rikard Grossman-Nielsen
//4th June 2025
#include <numeric>
#include <vector>
#include <iostream>
#include <concepts>

template <typename T>
requires std::signed_integral<T>||std::floating_point<T>
//function that returns the sum of a vector divided by 2
constexpr double sum_div_2(std::vector<T> const &numberField){
    double sumField=0.0;
    int i;
    for(i=0; i<numberField.size(); i++){
        sumField+=numberField[i];
    }
    return sumField/2;
}

int main(){
    std::vector numSignedInt {1, -2, 8, 4, -6};
    std::vector numFloat {1.2, 4.5, -3.6, 4.5, 4.123};
    std::cout << "Sum of vector with ints divided by 2: " << "\n" << sum_div_2(numSignedInt) << "\n";
    std::cout << "Sum of vector with ints divided by 2: " << "\n" << sum_div_2(numFloat) << "\n";

    return 0;
}

