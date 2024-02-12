//Anshu Addanki
#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std; 
  
int main() 
{ 
	double height;
	cout << "What's the lighthouse height in feet? ";
	cin >> height;
	float distance = sqrt(0.8*height);

        cout << "A " << height;	
        cout.setf(ios::fixed);
	cout << setprecision(0);
	cout << " foot tall lighthouse can be seen from " << distance << " miles away." <<endl;

}