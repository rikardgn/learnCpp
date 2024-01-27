#include <bits/stdc++.h>
#include <cstdlib>
#include <cstring>
#include <fcntl.h>
#include <filesystem>
#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <vector>
#include <unistd.h>
using namespace std;
namespace fs = std::filesystem;

#define BUF_SIZE 4096       /* use a buffer size of 4096 bytes */
#define OUTPUT_MODE 0700    /*protection bits for output file */

class mp3FileList{
    protected:
        long numFiles;
        std::string strMp3Path, srcFile, srcFile2, dstFile;
        std::vector<std::string> mp3Files;
        std::string dstDir;
        int *ptrRandList, numRandNr;
        string cStrMp3Path, cDstDir;
        
        void tokenizeFNameStr(std::string const &str, const char* delim,
                std::vector<std::string> &out)
        {
            char *token = strtok(const_cast<char*>(str.c_str()), delim);
            while (token != nullptr)
            {
                out.push_back(std::string(token));
                token = strtok(nullptr, delim);
            }
        }
        
        void addFilesMp3Dir(){
            std::string path;
            path=strMp3Path;
            // This structure would distinguish a file from a
            // directory
            struct stat sb;
    
            // Looping until all the items of the directory are
            // exhausted
            for (const auto& entry : fs::directory_iterator(path)) {
                // Converting the path to const char * in the
                // subsequent lines
                std::filesystem::path outfilename = entry.path();
                std::string outfilename_str = outfilename.string();
                const char* path = outfilename_str.c_str();
    
                // Testing whether the path points to a
                // non-directory or not If it does, displays path
                if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
                    mp3Files.push_back(path);
            }
        }

    public:
        mp3FileList(std::string strMp3Path, long numFiles, std::string dstDir, int* ptrRandList, int numRandNr){
            mp3FileList::strMp3Path = strMp3Path;
            mp3FileList::numFiles=numFiles;        
            mp3FileList::dstDir = dstDir;
            mp3FileList::ptrRandList=ptrRandList;
            mp3FileList::numRandNr=numRandNr;
            //excute functions to make class ready for use
            addFilesMp3Dir();
        }
        ~mp3FileList(){

        }

        void copyRandFiles(){
            int srcFileDesc, dstFileDesc, readByteCount, writeByteCount;
            int i, indOutp;
            std::string filePath;
            std::vector<std::string> outStr;
            const char* delim = "/";
            char buffer[BUF_SIZE];

            outStr.clear();

            for(i=0; i<numRandNr; i++){
                srcFile=mp3Files[ptrRandList[i]];
                srcFile2=mp3Files[ptrRandList[i]];
                tokenizeFNameStr(srcFile2, delim, outStr);
                dstFile=dstDir + "/" + outStr[3];
                outStr.clear();

                srcFileDesc = open(srcFile.c_str(), O_RDONLY);
                dstFileDesc = creat(dstFile.c_str(), OUTPUT_MODE);

                while(1){
                    readByteCount = read(srcFileDesc, buffer, BUF_SIZE);
                    if(readByteCount<=0) 
                        break;
                    writeByteCount = write(dstFileDesc, buffer, readByteCount);
                    if(writeByteCount<=0)
                        exit(4);
                }    
                
                //close the files
                close(srcFileDesc);
                close(dstFileDesc); 
            }
                
        }
};

class randNumList{
    protected:
        int *pekIntVect, numItemsRanList;
        long numFiles;
        std::string strMp3Path;

        void cntMp3sDir(){
            numFiles=0;
            std::string path;
            path=strMp3Path;
            // This structure would distinguish a file from a
            // directory
            struct stat sb;
        
            // Looping until all the items of the directory are
            // exhausted
            for (const auto& entry : fs::directory_iterator(path)) {
        
                // Converting the path to const char * in the
                // subsequent lines
                std::filesystem::path outfilename = entry.path();
                std::string outfilename_str = outfilename.string();
                const char* path = outfilename_str.c_str();
        
                // Testing whether the path points to a
                // non-directory or not If it does, displays path
                if (stat(path, &sb) == 0 && !(sb.st_mode & S_IFDIR))
                    numFiles++;
                }
        }
    public:
    randNumList(std::string strMp3Path, float procFilesCopy){
        randNumList::strMp3Path=strMp3Path;
        cntMp3sDir();
        randNumList::numItemsRanList = (int) ( (procFilesCopy/100) * numFiles );
        pekIntVect = new int[numItemsRanList];
    }
    ~randNumList(){
        delete[] pekIntVect;
    }
    void createList(int aNumItems){
        numItemsRanList=aNumItems;
        pekIntVect = new int[numItemsRanList];
    }

    void genRandNums(int aLargNumRange){
        int largNumRange, numFound, curRanNum, curLstInd, i, k;
        largNumRange=aLargNumRange;
        //init randnom number generator with seed.
        srand(time(0));   
        
        pekIntVect[0]=1+(rand()%largNumRange);
        numFound=0;
        do{
            curRanNum=(int)rand()%largNumRange+1;
            if(pekIntVect[0]==curRanNum){
                    numFound=1;
            }
        }while(numFound==1);
        pekIntVect[1]=curRanNum;

        curLstInd=1;
        i=0;
        while(1){
            do{
                numFound=0;
                curRanNum=1+ (rand()%largNumRange);
                for(int k=0; k<=curLstInd; k++){
                    if(pekIntVect[k]==curRanNum)
                        numFound=1;
                }
            }while(numFound==1);
            pekIntVect[curLstInd+1]=curRanNum;
            curLstInd++;
            i++;
            //numsToGen=Totalt numbers to generate minus the two already generated by the code above this loop
            if(i==(numItemsRanList-2))
                break;
        }
    }

    int *retPtrArrInt(void){
        return pekIntVect;
    }
    void prnŃumLst(){
        int q;
        for(q=0; q<numItemsRanList; q++)
            cout << " " << pekIntVect[q] << " ";
    }
    int retNumItemsRanList(){
        return numItemsRanList;
    }
    long retNumFiles(){
        return numFiles;
    }
};

int main(void){
    int numItemsRanList, *ptrArr2, q, i;
    long numFiles;
    float procFilesCopy;
    std::string strMp3Dir, dstDir;
    
    cout << "In what directory is the library of mp3files stored?";
    cin >> strMp3Dir;
    cout << "In what directory do you wish the random compilation of mp3 files to be created?";
    cin >> dstDir;
    cout << "How many percent of the entire list do you wish that the random library of mp3 should contain?";
    cin >> procFilesCopy;
    
    randNumList ranNumList(strMp3Dir, procFilesCopy );
    ranNumList.genRandNums(ranNumList.retNumFiles() );
    mp3FileList mp3List(strMp3Dir, ranNumList.retNumFiles(), dstDir, ranNumList.retPtrArrInt(), ranNumList.retNumItemsRanList() );
    mp3List.copyRandFiles();
    return 0;
}