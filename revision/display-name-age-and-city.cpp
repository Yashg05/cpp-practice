#include <iostream>
#include <string>
using namespace std;

int main() {
    string name, city;
    int age;

    getline(cin, name);
    cin >> age;
    cin.ignore();
    getline(cin, city);

    cout << "Hello, my name is " << name
         << ".\nI am " << age
         << " years old.\nI live in " << city << ".";

    return 0;
}