#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    bool cnt=true;
    cin>>n;
    int ori=n;
    while(n>0)
    {
        int a=n%10;

        if(a==7 || a==4) //
        {
            cnt++;
        }

        n/=10;
        //cout<<n<<endl;
        i++;
    }


    if(cnt>=1 || cnt==i || original%4==0 || original %7==0 )
    {
        cout<<"YES";

    }
    else
        cout<<"NO";

    return 0;
}
