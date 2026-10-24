#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;

    cin >> a;

    if (a>0)
    {
        cout << "The integer " << a << " is positive." << endl;
    }
    else if (a < 0)
    {
        cout << "The integer " << a << " is negative." << endl;
    }
    else
    {
        cout << "The integer is zero.";
    }
    
    return 0;

}