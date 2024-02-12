// Lab 9.5
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal

#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    	int thousand = 1000;
	int million = 1000000;
	int billion = 1000000000;
	bool isThousandaire = false;
	bool isMillionaire = false;
	bool isBillionaire = false;
	int weeksThousand = 0;
	int weeksMillion = 0;
	int weeksBillion = 0;
	double savings = 0;
	double doubledVal = 0.05;
	int currentWeek = 0;

	while (true) {
		if (!isThousandaire && savings >= thousand) {
			isThousandaire = true;
			weeksThousand = currentWeek;
		}
		if (!isMillionaire && savings >= million) {
			isMillionaire = true;
			weeksMillion = currentWeek;
		}
		if (!isBillionaire && savings >= billion) {
			isBillionaire = true;
			weeksBillion = currentWeek;
			break;
		}
		savings += doubledVal;
		doubledVal *= 2;
		currentWeek++;
	}
    	cout << "In " << weeksThousand << " weeks, I will be a thousandaire!" << endl;
    	cout << "In " << weeksMillion << " weeks, I will be a millionaire!" << endl;
    	cout << "In " << weeksBillion << " weeks, I will be a billionaire!" << endl;
}