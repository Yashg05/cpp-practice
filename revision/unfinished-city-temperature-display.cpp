#include<iostream>
#include<string>
using namespace std;

int main()
{
    string city;
    float temp;

    getline(cin, city);
    cin >> temp;

    cout << "City: " << city << endl;
    cout << "Temp: " << temp << "C"

    return 0;
}