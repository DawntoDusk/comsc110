// Lab 7.1
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main()
{
  char userGrade; 
  cout << "What is your grade? [A, B, C, D, or F]: "; 
  cin >> userGrade; 
  cin.ignore(1000, 10); 
  
  switch (userGrade)
  {
	  case 'A':
	  case 'B':
	  case 'C':
		cout << "You pass." << endl;
		break;
	  case 'D':
	  case 'F':
		cout << "You do NOT pass. " << endl;
		break;
	  default:
		cout << "Invalid Entry." << endl;
  }
}