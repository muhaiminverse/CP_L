#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n;
   
    while (cin>>n)
    {
        if(n<0) break;

    long long int sum=1;
    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    cout<<sum<<"\n";

    }

    return 0;
}

/*
210000000

*/