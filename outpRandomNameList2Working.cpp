//#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
#include <fstream>
//#include <iostream>

//18th may 17:00 2024
//The included headers vector and string doesn't disturb the 
//function of random number generation

//18th may 17:28 2024
//included <fstream>

//18th may 17:37 2024
//inclusion of <fstream> disrupts the random number generation process.

//18th may 17:38 2024
//exlcuded <stdio.h> to see
//if <stdio.h> and <stdlib> conflicts with eachother

//18th may 17:45 2024
//excluding <stdio.h> and leaving <stdlib> solved the problem with random number genration
//Thus a concflict beetween <stdio.h> and <stdlib> cause the problem
//with random number generation 
int main(void){
    int i, k, curRanNum, curLstInd, numFound, numsToGen, largNumRange;
    int *numLst;
    std::vector<std::string> nameList;
    srand(time(0));
    
    printf("What is the largest number in the range of random numbers?\n");
    scanf("%d", &largNumRange);
    printf("\nLargest Number in range is:%d", largNumRange);
    printf("How many random numbers in the range 1-%d do you wish to generate?", largNumRange);
    scanf("%d", &numsToGen);

    numLst=(int*)malloc(numsToGen * sizeof(int));

    numLst[0]=rand()%largNumRange+1;
    numFound=0;
    do{
        curRanNum=(int)rand()%largNumRange+1;
        if(numLst[0]==curRanNum){
                numFound=1;
        }
    }while(numFound==1);
    numLst[1]=curRanNum;
    
    //numsToGen=22;
    curLstInd=1;
    i=0;
    while(1){
        do{
            numFound=0;
            curRanNum=(int)rand()%largNumRange+1;
            for(int k=0; k<=curLstInd; k++){
                if(numLst[k]==curRanNum)
                    numFound=1;
            }
        }while(numFound==1);
        numLst[curLstInd+1]=curRanNum;
        curLstInd++;
        i++;
        //printf("i=%d", i);
        //numsToGen=Totalt numbers to generate minus the two already generated by the code above this loop
        if(i==(numsToGen-2))
            break;
        //after break the last vector index of the generated numbers will be in curLstInd
        //if all numbers of the vecor are filled it will be the last index of the vector
    }

    printf("curLstInd=%d\n", curLstInd);
    printf("i=%d", i);
    printf("\nOutput\n");
    for(int i=0; i<=curLstInd; i++){
        printf(" %d", numLst[i]);
    }       
    return 0;
}