#include<iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age;
    float cgpa;

    getline(cin, name);
    cin >> age;
    cin >> cgpa;

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "CGPA: " << cgpa << endl;

    return 0;
}