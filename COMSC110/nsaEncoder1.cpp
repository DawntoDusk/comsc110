// Lab 10.6
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;

string encode(string code)
{
    for (int i = 0; i < code.length(); i++) // for each char in the string...
        code[i]++; // bump the ASCII code by 1
    return code;
}

int main()
{
    ifstream fin;
    ofstream fout;
    string fileName;
    cout << "Enter name of file: ";
    getline(cin, fileName);

    fin.open(fileName.c_str());
    if(!fin.good()) throw "I/O error";
    fout.open("secret.txt");
	if(!fout.good()) throw "I/O error";

    string rawText;
    while (true)
    {
        if (!fin.good()) break;
        getline(fin, rawText);
        fout << encode(rawText) << endl;
    }
    
    fout.close();
    fin.close();
}