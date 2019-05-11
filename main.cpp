#include <iostream>
#include <fstream>
#include "vigenere.h"

using std::ifstream;
using std::ofstream;
using std::cin;

void printMenu();

int main()
{
    int userInput;
    char filename[30];
    char key[30];
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
        
    }

    return 0;
}

void printMenu()
{
    printf("Vigenere Cipher\n---\n");
    printf("1. Encrypt\n2. Decrypt\n3. Exit\n\n> ");
}