#include <iostream>
using namespace std;
//Example of a simple algorithm called insertion sort in C++
//The program lets the user input 8 to 24 numbers and then 
//sorts them using the algorithm inseration sort.
//Please note that the function insertionsort takes a pointer to the list that is being sorted rather than copies
//the int array to an internal int array of its own
//this makes the code somewhat more effectient
//Rikard Grossman-Nielsen
//28th aug 2023
void insertionSort(int* ptrInt, int n){
	int k, elemImp, q;
	for(k = 1; k < n; k++){
		elemImp = ptrInt[k];
		q=k-1;
		
		while( q >= 0 && ptrInt[q] > elemImp){
			ptrInt[q+1] = ptrInt[q];
			q = q - 1;
		}
		ptrInt[q+1] = elemImp;
	}
}
int main(void){ 
	int numItems, numEnt, k;
	int* ptrInt;
	
	cout << "Enter a number beetwen 8 and 	24:" << "\n";
	while(true){ 
		cin >> numItems;
		if(numItems>=8 && numItems<=24)
			break;
	}
	ptrInt=new int[numItems];
	
	for(k=0;k<numItems; k++){
		ptrInt[k]=0;
	}
	
	for(k=0;k<numItems; k++){
		cin >> ptrInt[k];
	}
	
	insertionSort(ptrInt, numItems); 
	
	for(k=0; k<numItems; k++)
		cout << " " << ptrInt[k];
}