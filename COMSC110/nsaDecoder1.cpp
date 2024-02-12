// Lab 10.7
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string decode(string code)
{
    for (int i = 0; i < code.length(); i++) // for each char in the string...
        code[i]--; // bump the ASCII code by 1
    return code;
}

int main()
{
    ifstream fin;

    fin.open("secret.txt");
    if(!fin.good()) throw "I/O error";

    string rawText;
    while (true)
    {
        if (!fin.good()) break;
        getline(fin, rawText);
        cout << decode(rawText) << endl;
    }
    
    fin.close();
}