#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a,b,c, cnt =0 ;
    while (cin>>a>>b>>c)
    {
        if((a+b+c) >= 2)
        {
            cnt++;
        }
    }
    cout<<cnt;
}