// Lab 11.6
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string decode(string code)
{
    const int size = 5;
    int offset[size] = {-13, 4, 11, -9, -2};
    int indexValue = 0;
    int count = 0;
    for(int i = 0; i < code.length(); i++)
    {
        indexValue = count % size;
        code[i] = code[i]-offset[indexValue];
        count ++;
    }
    return code;
}

int main()
{
    const int size = 5;
    int offset[size] = {-13, 4, 11, -9, -2};

    ifstream fin;
    fin.open("secret.txt");
    if(!fin.good()) throw "I/O error";
    int indexValue = 0;
    int count = 0;
    string rawText;
    while (true)
    {
        if (!fin.good()) break;
        getline(fin, rawText);
        cout << decode(rawText) << endl;
    }
    fin.close();
}