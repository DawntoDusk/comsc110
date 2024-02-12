// Lab 11.6
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string encode(string code)
{
    const int size = 5;
    int offset[size] = {-13, 4, 11, -9, -2};
    int indexValue = 0;
    int count = 0;
    for(int i = 0; i < code.length(); i++)
    {
        indexValue = count % size;
        code[i] = code[i]+offset[indexValue];
        count ++;
    }
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