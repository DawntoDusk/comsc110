#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	int monthlyAddition = 350;
	float rate = 4.5;
	int yearsLeft = 15;
	float final = monthlyAddition * (pow(1 + (rate/1200), yearsLeft*12) - 1)/(rate/1200);
	cout << "In " << yearsLeft << " years at " << rate << "%, $" << monthlyAddition << " deposited per month will grow to $";
	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << final << "." << endl;
}