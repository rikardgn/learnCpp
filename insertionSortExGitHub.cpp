#include <iostream>
using namespace std;
//Example of a simple algorithm called insertion sort in C++
//The program lets the user input 8 to 24 numbers and then 
//sorts them using the algorithm inseration sort.
//Please note that the function insertionsort takes a pointer to the list that is being sorted rather than copies
//the int array to an internal int array of its own
//this makes the code somewhat more effectient
//Sorting algorithm taken from github repo:
//https://github.com/mohanadtalat91/Sorting-Algorithms
//Rikard Grossman-Nielsen
//29th feb 2024
/*
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
}*/
void swap(int *first, int *second ){
    int temp = *first ;
    *first = *second ;
    *second = temp ;
}

void insertion_sort( int* ptrInt , int n){

    for( int i=1 ; i<n ; i++ ){

        int j = i ;
        while( j>0 && ptrInt[j]<ptrInt[j-1]){
            swap( ptrInt[j] , ptrInt[j-1] ) ;
            --j ;
        }
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
	
	insertion_sort(ptrInt, numItems); 
	
	for(k=0; k<numItems; k++)
		cout << " " << ptrInt[k];
}