#include<bits/stdc++.h>
using namespace std;

int main()
{
    float x;
    cin >> x;

    if (x < 0 || x > 100){
    cout << "Invalid marks. Please enter correct marks.";
    }
    else if(x < 40){
        cout << "YOU FAILED LOSER HAHAHA!";
    }
    else if (x <= 60)
    {
        cout << "EW you got 'D' ";
    }
    else if (x <= 70)
    {
        cout << "You scored 'C'";
    }
    else if (x <= 80 )
    {
        cout << "You scored 'B'";
    }
    else if (x <= 90)
    {
        cout << "You scored 'A'";
    }
    else{
        cout << "You nerd mf you scored 'A+'";
    }
return 0;
}