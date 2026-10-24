#include<iostream>
#include<string>
using namespace std;

int main()
{
    float len;
    float wid;

    cin >> len;
    cin >> wid;

    cout << "The area of recantangle is: " 
    << len * wid << endl;
    cout << "The parameter of the rectangle is: " 
    << 2*(len+wid) << endl;

    return 0;
}