// Lab 11.5
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler used: Terminal
#include <algorithm>
#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "How many scores: ";
    cin >> size;
    cin.ignore(1000,10);
    int* score = new int[size];

    // read and save the scores
    for (int i = 0; i < size; i++)
    {
        cout << "Enter a number: ";
        cin >> score[i];
        cin.ignore(1000,10);
    } 

    //sort
    sort(score, score + size);
    cout << "Sorted: ";
    for (int i = 0; i < size; i++)
        cout << score[i] << ' ';
    cout << endl;

    //max & min
    int max = score[0];
    int min = score[0];
    for(int i = 0; i < size; i++)
    {
        if(score[i] > max)
        {
            max = score[i];
        }
        if (score[i] < min)
        {
            min = score[i];
        }
    }
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;

    //avg
    int total = 0;
    for(int i = 0; i < size; i++)
        total += score[i];
    double avg = total/4.0;
    cout << "Average: " << avg << endl;

    //A grade
    bool aExists = false;
    for(int i = 0; i < size; i++)
    {
        if(score[i] >= 90)
        {
            cout << "At least one 'A' grade entered." << endl;
            aExists = true;
            break;
        }
    }
    if(!aExists)
        cout << "Zero 'A' grades have been entered." << endl;
} 
