#include "vigenere.h"

string encrypt(ifstream & fin, string & key)
{
    int fileLength;
    int keyLength = key.size();
    string cipherText;

    //Get length of file
    fin.seekg(0, fin.end);
    fileLength = fin.tellg();
    fin.seekg(0, fin.beg);

    printf("%d", fileLength);

    return cipherText;
}
