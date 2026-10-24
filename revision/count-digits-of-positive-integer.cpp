#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int count = 0;

    for(int i = n; i > 0; i /= 10)
    {

        count++;
    }
    cout << count;
    return 0;
}