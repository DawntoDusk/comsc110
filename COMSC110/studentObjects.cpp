// Lab 12.2
// Programmer: Anshu Addanki
// Editor used: VsCode
// Compiler(s) used: Terminal
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std; 

struct studentObj
{
    // need variable for: name, address, city, state, zip, gender, student id, and gpa
    string name;
    string address;
    string city;
    string state;
    int zip;
    char gender;
    int id;
    double gpa;
};
studentObj enterValues(studentObj obj, int num)
{
    cout << "Enter for Student " << num << endl;
    cout << "     name: ";
    getline(cin, obj.name);
    cout << "     address: ";
    getline(cin, obj.address);
    cout << "     city: ";
    getline(cin, obj.city);
    cout << "     state: ";
    getline(cin, obj.state);
    cout << "     zip: ";
    cin >> obj.zip;
    cout << "     gender: ";
    cin >> obj.gender;
    cout << "     student id: ";
    cin >> obj.id;
    cout << "     gpa: ";
    cin >> obj.gpa;
    cout << endl;
    return obj;
}

void output(studentObj obj, int num)
{
    cout << "Output for Student " << num << endl;
    cout << "     name: " << obj.name << endl;
    cout << "     address: " << obj.address << endl;
    cout << "     city: " << obj.city << endl;
    cout << "     state: " << obj.state << endl;
    cout << "     zip: " << obj.zip << endl;
    cout << "     gender: " << obj.gender << endl;
    cout << "     student id: " << obj.id << endl;
    cout << "     gpa: " << obj.gpa << endl;
    cout << endl;   
}

int main()
{
    studentObj student1;
    studentObj student2;
    studentObj student3;

    student1 = enterValues(student1, 1);
    student2 = enterValues(student2, 2);
    student3 = enterValues(student3, 3);
    output(student1, 1);
    output(student2, 2);
    output(student3, 3);
}
