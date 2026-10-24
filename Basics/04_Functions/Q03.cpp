#include<bits/stdc++.h>
using namespace std;

void introduce(string name, int age)
{
    cout << "My name is " << name << endl;
    cout << "I am " << age << " years old."<< endl;
}

int main()
{
    string name1;
    int age1;
    cin >> name1 >> age1;
    introduce(name1, age1);
    return 0;

}