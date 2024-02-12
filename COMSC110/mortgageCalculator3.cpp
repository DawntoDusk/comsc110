// Lab 10.5
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
	ofstream fout;

	int n = 30 * 12; 
	float monthlyPayment;
	int p;
	cout << "What is amount borrowed? " ;
	cin >> p;
	float r;
	cout << "What is annual interest rate? " ;
	cin >> r;
	r = r/1200;
	monthlyPayment = (p* pow(1+r,n)  *r) / ( pow(1+r, n) -1);	

	fout.open("mortgage.txt", ios::app);
	if(!fout.good()) throw "I/O error";
	fout << "Amount borrowed (user input) = $" << p << endl;
	fout << "Annual Interest (user input) = " << (r*1200) << endl;
	fout << "Payback Period (programmer input) = " << "30 years" << endl;
	fout << "Monthly payment (output) = $" << monthlyPayment << endl;

	cout << "\nAmount borrowed (user input) = $" << p << endl;
	cout << "Annual Interest (user input) = " << (r*1200) << endl;
	cout << "Payback Period (programmer input) = " << "30 years" << endl;
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << "Monthly payment (output) = $" << monthlyPayment << endl;

}