#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    bool isPrime = true;

    if (n<2)
    {
        isPrime = false;
    }

    for(int i=n-1; i > 1; i--)
    {
        if (n%i==0)
        {
            isPrime = false;
            break;
        }
    }
    cout << isPrime;
}