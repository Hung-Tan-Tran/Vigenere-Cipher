#include <iostream>
#include <string>
#include <fstream>
#include "vigenere.h"

using std::string;
using std::ifstream;
using std::ofstream;
using std::cin;

void printMenu();

int main()
{
    int userInput;
    string filename;
    string key;
    ifstream fin;
    ofstream fout;

    printMenu();
    cin >> userInput;

    if(userInput == 1)
    {
        printf("\nFilename: ");
        cin >> filename;

        fin.open(filename);
        if(!fin)
        {
            printf("\nInvalid file. Exiting program.\n");
            return -1;
        }

        printf("Key: ");
        cin >> key;

        string test = encrypt(fin, key);
    
        /*
        while(!fin.eof())
        {
            char currChar = fin.get();
            printf("%c", currChar);
            numChars++;
        }*/


    }

    return 0;
}

void printMenu()
{
    printf("Vigenere Cipher\n---\n");
    printf("1. Encrypt\n2. Decrypt\n3. Exit\n\n> ");
}
