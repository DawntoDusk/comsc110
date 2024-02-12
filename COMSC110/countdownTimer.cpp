// Lab 7.2
// Programmer: Anshu Addanki
// Editor used: VSCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>

using namespace std; 

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

int main()
{
    //cout.fill('0');
    for (int i = 10; i >= 0; i--)
    {
        cout << setw(2) << i;
        cout.flush();

        #ifdef _WIN32
        Sleep(1000);
        #else
        sleep(1);
        #endif

        cout << '\r';
    }
    cout << "Blast Off!" << endl;
    
}