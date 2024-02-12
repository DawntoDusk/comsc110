#include <string> 
#include <iostream>
using namespace std; 
  
int main() 
{ 
    int days = 0;
    int years = 16;
    int month = 1;
    int dateOfBirth = 12;

    days = days + ((years*365) + (years/4));
    
    days = days - 12;

    days = days - 102;
    

    cout << "DOB: Jan 12, 2007" << endl;
    cout << "DUE: Sept 20, 2023" << endl;
    cout << "Age: " << days << " days" << endl;
    
}