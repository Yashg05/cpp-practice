#include<bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    int age;
    string city;

    getline(cin, name);
    cin >> age;
    cin.ignore();
    getline(cin, city);

    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;

    return 0;
}