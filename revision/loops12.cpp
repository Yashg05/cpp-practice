#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int reversed = 0;

    for(int i= n; i > 0; i /= 10)
    {
        reversed = (reversed * 10) + i % 10;
    }
    cout << reversed;
    return 0;
}