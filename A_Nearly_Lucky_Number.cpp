#include<bits/stdc++.h>
using namespace std;

int main(){


    long long int n;
    cin>>n;
    int c = 0;
    while (n>0)
    {
        int last = n%10;

        if(last == 4 || last == 7) c++;

        n/=10;
    }
    
        if(c == 4 || c == 7)
        cout<<"YES";
        else
        cout<<"NO";
}