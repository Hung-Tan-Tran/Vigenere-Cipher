#ifndef VIGENERE_H
#define VIGENERE_H

#include <string>
#include <fstream>

using std::string;
using std::ifstream;


string encrypt(ifstream & fin, string & key);


#endif