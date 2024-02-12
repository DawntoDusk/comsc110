// Lab 12.1
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std; 

struct mortgageCalculator4
{
	int n;
	float monthlyPayment;
	float r;
	int p;
};

int main() 
{ 
	mortgageCalculator4 obj;
	
	cout << "What is amount borrowed? " ;
	cin >> obj.p;

	cout << "What is annual interest rate? " ;
	cin >> obj.r;

	double rate = obj.r / (1200);
    double yearPayback = 30;
    double monthsPayback = (yearPayback * 12);
    double paymentMonthly = (obj.p * pow(1+(rate),monthsPayback) * rate)/((pow(1+rate,monthsPayback))-1);
	obj.monthlyPayment = paymentMonthly;
	cout << "\nAmount borrowed (user input) = $" << obj.p << endl;
	cout << "Annual Interest (user input) = " << (obj.r) << endl;
	cout << "Payback Period (programmer input) = " << "30 years" << endl;
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << "Monthly payment (output) = $" << obj.monthlyPayment << endl;

    ofstream fout;
    fout.open("mortgage.txt", ios::app);
    fout << "Amount borrowed = $" << obj.p << endl;
    fout << "Annual interest rate = " << obj.r << "%" << endl;
    fout << "Payback period = " << yearPayback << " Years" << endl;
    fout.setf( ios:: fixed | ios:: showpoint);
    fout << setprecision(2);
    fout << "Monthly payment = $" << paymentMonthly << endl;
    fout << endl;
    fout.close();
}