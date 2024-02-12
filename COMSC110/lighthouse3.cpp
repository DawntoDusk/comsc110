// Lab 10.4
// Programmer: Anshu Addanki
// Editor used: TextEdit
// Compiler(s) used: Terminal
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std; 
  
int main() 
{ 
    ifstream fin;
    double height;
	
    fin.open("lighthouse.txt");
    if (!fin.good()) throw "I/O error";
    fin >> height;
    fin.ignore(1000,10);

    float distance = sqrt(0.8*height);

    cout << "A " << height;	
    cout.setf(ios::fixed);
    cout << setprecision(0);
    cout << " foot tall lighthouse can be seen from " << distance << " miles away." <<endl;

}