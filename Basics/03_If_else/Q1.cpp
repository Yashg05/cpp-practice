#include<bits/stdc++.h>
using namespace std;

int main(){
int x;

cin >> x;

if(x == 0){
    cout << "The number is zero: " << x;
}
else if(x < 0){
    cout << "The number is negative: " << x;
}
else{
    cout << "The number is positive: " << x;
}
return 0;
}