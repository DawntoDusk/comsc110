// Lab 8.2
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
using namespace std;

void additionProblem(int topNumber, int bottomNumber)
{
    int userAnswer;
    cout << "\n\n\n " << topNumber << " + " << bottomNumber << " = ";
    cin >> userAnswer;
    cin.ignore(1000, 10);
    int answer = topNumber + bottomNumber;
    if (answer == userAnswer)
    	cout << " Correct!" << endl;
    else
    	cout << " Very good, but a better answer is " << answer << endl;
} 

int main()
{
    srand(time(0));
    int topNumber;
    int bottomNumber;
    for (int i = 0; i < 5; i++)
    {
	topNumber = rand() % 10;
	bottomNumber = rand() % 10;
        additionProblem(topNumber, bottomNumber);
    }
}