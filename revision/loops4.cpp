#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= 10 ; i++)
    {
        int product = n * i;
        cout << n << " x " << i << " = " << product << endl;
    }
    return 0;

}