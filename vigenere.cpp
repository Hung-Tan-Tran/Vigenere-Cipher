#include "vigenere.h"

string encrypt(ifstream & fin, string & key)
{
    int fileLength;
    int keyLength = key.size();
    int currFilePos = 0;
    int currKeyPos = 0;
    string cipherText;

    //Get length of file
    fin.seekg(0, fin.end);
    fileLength = fin.tellg();
    fin.seekg(0, fin.beg);

    //Creating offset string
    while(currFilePos != fileLength)
    {
        printf("%c",key[currKeyPos]);
        currKeyPos++;
        if(currKeyPos == keyLength)
            currKeyPos = 0;
        currFilePos++;
    }

    return cipherText;
}
