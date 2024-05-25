//#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <chrono>
#include <random>
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
    //seed seconds since 1970
    auto const ticksSeed=std::chrono::system_clock::now().time_since_epoch().count();
    // Mersenne Twister random engine:
    std::mt19937 urbg {ticksSeed};
    

    printf("What is the largest number in the range of random numbers?\n");
    scanf("%d", &largNumRange);
    printf("\nLargest Number in range is:%d", largNumRange);
    printf("How many random numbers in the range 1-%d do you wish to generate?", largNumRange);
    scanf("%d", &numsToGen);
    std::uniform_int_distribution<int> distr1 {0, largNumRange};

    //allocate memory for list contaning random numbers
    numLst=(int*)malloc(numsToGen * sizeof(int));

    //fill list with random numbers
    auto const ranValConst = distr1(urbg);
    int ranVal=(int)ranValConst;
    numLst[0]=ranVal;
    numFound=0;
    do{
        auto const ranValConst = distr1(urbg);
        int ranVal=(int)ranValConst;
        curRanNum=ranVal;
        if(numLst[0]==curRanNum){
                numFound=1;
        }
    }while(numFound==1);
    numLst[1]=curRanNum;
    
    curLstInd=1;
    i=0;
    while(1){
        do{
            numFound=0;
            auto const ranValConst = distr1(urbg);
            int ranVal=(int)ranValConst;
            curRanNum=ranVal;
            for(int k=0; k<=curLstInd; k++){
                if(numLst[k]==curRanNum)
                    numFound=1;
            }
        }while(numFound==1);
        numLst[curLstInd+1]=curRanNum;
        curLstInd++;
        i++;
        if(i==(numsToGen-2))
            break;
    }


    
    //fill the dynamic vector with strings
    nameList.push_back( std::string("Elvis Presly") );
    nameList.push_back( std::string("Ada Lovelace") );
    nameList.push_back( std::string("Jimmy Carter") );
    nameList.push_back( std::string("James Deam") );
    nameList.push_back( std::string("George Washington") );
    nameList.push_back( std::string("Nicolia Tesla") );
    nameList.push_back( std::string("Elon Musk") );
    nameList.push_back( std::string("Adameus Mozart") );
    nameList.push_back( std::string("Marie Curie") );
    nameList.push_back( std::string("Hillary Clinton") );

    
    printf("curLstInd=%d\n", curLstInd);
    printf("i=%d", i);
    printf("\nOutput\n");
    for(int i=0; i<=curLstInd; i++){
        printf(" %d", numLst[i]);
    }
    
    std::cout << "nameList index no 2 contains the following string \n";
    std::cout << nameList[2];

    return 0;
}