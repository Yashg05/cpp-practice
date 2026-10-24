#include<bits\stdc++.h>
using namespace std;

bool isEven(int x)
{
    return x % 2 == 0;
}

int main()
{
    int y;
    cin >> y;
    if (isEven(y))
    {
        cout << "Even";
    }
    else
    {
        cout << "Odd";
    }
    return 0;
}
