#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;

    while (cin>>a>>b>>c)
    {
        if(a==0 && b==0 && c==0)    break;

        if(a>c) swap(a,c);
        else if(b>c) swap(b,c);

        (c == sqrt(a*a + b*b)) ? cout<<"right\n": cout<<"wrong\n";

    }
    
    
}