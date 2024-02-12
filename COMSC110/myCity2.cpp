// Lab 11.1
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	int temps[5] = {75, 74, 76, 73, 73};

	cout << "San Ramon, California forecast high temperatures:" << endl;
	cout << "Wednesday, Sep 20, " << temps[0] << " degrees" << endl;
	cout << "Thursday, Sep 21, " << temps[1] << " degrees" << endl;
	cout << "Friday, Sep 22, " << temps[2] << " degrees" << endl;
	cout << "Saturday, Sep 23, " << temps[3] << " degrees" << endl;
	cout << "Sunday, Sep 24, " << temps[4] << " degrees" << endl;
	cout << "source: weather.com" << endl;
}