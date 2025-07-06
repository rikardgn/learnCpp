//Example that shows how to use the auto keyword to loop through a vector
//Rikard Grossman-Nielsen
//6th July 2025
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<float> numberField{1.5,2.5,3.5,4.5,5.0};
    for(auto num:numberField){
        cout << num << "\n";
    }

    return 0;
}