//Program that sorts a list of ints
//Entered by the user using the sorting algorithm bubbleSort
#include <bits/stdc++.h>
using namespace std;
 
//Function that sorts an array
//of ints using the bubbleSort algorithm.
//Inputs: a pointer to an int aray,
//number of elements in the array
void bubbleSortPtr(int *ptrInt, int n)
{
    int k, q;
    bool isSwap;
    for (k = 0; k < n - 1; k++) {
        isSwap = false;
        for (q = 0; q < n - k - 1; q++) {
            if (ptrInt[q] > ptrInt[q + 1]) {
                swap(ptrInt[q], ptrInt[q + 1]);
                isSwap = true;
            }
        }
 
        if (isSwap == false)
            break;
    }
}
 
//Main function
int main()
{
    int numEnt, indVect=0;
	
	while(true){
		cin >> numEnt;
		if(numEnt>=4 && numEnt<=25)
			break;
	}
	
	int * pekInt;
	pekInt=new int[numEnt];
	
	while(true){
		cin >> pekInt[indVect];
		indVect++;
		if( indVect==numEnt)
			break;
	}

    bubbleSortPtr(&pekInt[0], numEnt);
    cout << pekInt[0];
    for(indVect=1; indVect<numEnt; indVect++)
		cout << "  " << pekInt[indVect];
    cout << "\n";
    return 0;
}