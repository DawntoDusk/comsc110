// Lab 9.2
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string code;
    cout << "Enter a line of text: ";
    getline(cin, code);
    for (int i = 0; i < code.length(); i++) // for each char in the string...
        code[i]++; // bump the ASCII code by 1
    cout << code << endl;
}