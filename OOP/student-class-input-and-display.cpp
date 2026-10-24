#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    float marks;

public:
    void input()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\nStudent Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;   // Object

    s.input();   // Method
    s.display(); // Method

    return 0;
}