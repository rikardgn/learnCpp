//Example of a user can defined a copy constructor in C++.
//This class contains an array  of randomized integers.
//The copy constructor creates a new array and copies the numbers from the old class.
#include <cstdlib>
#include <iostream>
class numClass{
    int *intRanVal;
    int multiplier, numRanVal, i, maxRanVal;

    public:
    //Default constructor
    numClass(int multiplier, int numRanVal, int maxRanVal){
        numClass::multiplier=multiplier;
        numClass::numRanVal=numRanVal;
        numClass::intRanVal=new int[numClass::numRanVal];
        numClass::maxRanVal=maxRanVal;
        
        
        srand(time(0));
        i=0;
        for(i=0; i<numRanVal; i++)
            intRanVal[i] = 5 * ( random() % maxRanVal + 1 );
    }
    //Destructor
    ~numClass(){
        delete[] intRanVal;
    }
    //Copy constructor
    numClass(const numClass &oldNumClass)
    {
        int numElem, i, intValCopyVar;
        intRanVal=new int[oldNumClass.numRanVal];

        for(i=0; i<oldNumClass.numRanVal; i++){
            intRanVal[i] = oldNumClass.intRanVal[i];
        }
            
    }
    int *returPtrVect(){
        return intRanVal;
    }
};

int main(){
    int i;
    int *ptrVect;

    numClass numClass1(5,100, 150);
    ptrVect=numClass1.returPtrVect();
    //create a new object from numsClass1
    numClass numClass2 = numClass1;
    //print numClass1
    ptrVect=numClass1.returPtrVect();
    std::cout << "numClass1:" << "\n";
    std::cout << ptrVect[0]; 
    for(i=1; i<100; i++)
        std::cout << " " << ptrVect[i];
    std::cout << "\n"; 
    //print numClass2
    std::cout << "numClass2:" << "\n";
    ptrVect=numClass2.returPtrVect();
    std::cout << ptrVect[0];
    for(i=1; i<100; i++)
        std::cout << " " << ptrVect[i];
    return 0;
}