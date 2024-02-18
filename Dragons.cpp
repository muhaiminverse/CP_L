#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,x,y,cnt=0,s1;
    cin>>s>>n;
    s1=s;
    for(int i=0; i<n; i++)
    {

        cin>>x>>y;
        if(s1>x)
        {
            s1=s1+y;
            cnt++;
        }
        else
        {
        cout<<"NO"<<endl;
        break;
        }

    }

    if(cnt==n)
        cout<<"YES"<<endl;


    return 0;
}

/*

2 2
1 99
100 0


10 1
100 100


*/
