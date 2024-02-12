#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	int height = 100;
	float distance = sqrt(0.8*height);
	cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << "A " << height << " lighthouse can be seen from " << distance << " miles away." <<endl;

}