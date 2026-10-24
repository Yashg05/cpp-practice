#include<bits\stdc++.h>
using namespace std;

int maximum(int x, int y)
{
    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int x1, y1;
    cin >> x1 >> y1;
    cout << maximum(x1,y1);
    return 0;
}