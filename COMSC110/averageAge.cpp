#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	int age1 = 19;
	int age2 = 21;
	int age3 = 30;
	float avgAge =  ((double) age1 + age2 + age3)/3;

	cout.setf(ios::fixed|ios::showpoint);
	cout << setprecision(2);
	cout << "The average of three ages is " << avgAge << "." << endl;
}