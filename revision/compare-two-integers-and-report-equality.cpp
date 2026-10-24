#include<iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    if (a>b)
    {
        cout << "The largest integer is: " << a;

    }
    else if (a<b)
    {
        cout << "The largest integer is: " << b;
    }
    else
    {
        cout << "Both 'a' " << " and " << "'b'" << " are equal which is: " << a;

    }
    return 0;

}