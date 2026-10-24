#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;
    bool isGreater = (a>b);
    bool isLess = (a<b);
    bool isEqual = (a==b);
    bool isNotEqual = (a != b);
    bool isGreaterOrEqual = (a>=b);

    cout << "The first number greater than the second: "
    << isGreater << endl;
    cout << "The first number less than the second: "
    << isLess << endl;
    cout << "Are they equal?: " << isEqual << endl;
    cout << "Are they not equal?: "
    << isNotEqual << endl;
    cout << "The first number greater than or equal to the second: "
    << isGreaterOrEqual << endl;
    
    return 0;
}