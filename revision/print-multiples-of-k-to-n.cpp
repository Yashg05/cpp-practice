#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    for(int i = k; i <= n; i += k)
    {
        cout << i << endl;
    }
    return 0;
}