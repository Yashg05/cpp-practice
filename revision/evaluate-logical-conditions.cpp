#include<iostream>
#include<string>
using namespace std;

int main ()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    bool bothPositive = (a>0 && b>0);
    bool eitherPositive = (a>0 || b>0);
    bool bothEven = (a % 2 == 0 && b % 2 == 0);
    bool firstNotPositive = (!(a>0));

    cout << "Both numbers are greater than zero: "
    << bothPositive << endl;
    cout << "At least one number is greater than zero: "
    << eitherPositive << endl;
    cout << "Both numbers are even: " << bothEven << endl;
    cout << "The first number is not greater than zero: "
    << firstNotPositive << endl;
    return 0;
}