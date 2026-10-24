#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age;
    double gpa;
    char grade;

    getline(cin, name);
    cin >> age;
    cin >> gpa;
    cin >> grade;
    bool isSelected = (gpa >= 5);

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << gpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "isSelected: " << isSelected << endl;

    return 0;
}