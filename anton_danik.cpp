#include<bits/stdc++.h>
using namespace std;

int main(){

    long int n;
    string s;
    int a=0,d=0,i=0;

    cin>>n;
    cin>>s;

    while (i<n)
    {
        if(s[i] == 'A')     a++;
        else if(s[i] == 'D')   d++;
        
        i++;  
    }

    if(a == d)  cout<<"Friendship"<<'\n';
    else if(a > d)  cout<<"Anton"<<'\n';
    else    cout<<"Danik"<<'\n';
    
    return 0;
}