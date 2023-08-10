#include<bits/stdc++.h>
using namespace std;

int main(){
int year;
cin>>year;

while (true)
{
    year++;
    int f = year /1000;
    int s = year / 100 % 10;
    int t = year / 10 % 10;
    int ft = year % 10;

    
    if(f != s && f != t && f != ft && s != t && s != ft && t != ft)
    break;
}
    cout<<year;
}
