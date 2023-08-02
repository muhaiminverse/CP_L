#include <bits/stdc++.h>
using namespace std;

int whos_left(){
     int a[3];

     for (int i = 0; i < 3; i++)
        cin>>a[i];

     sort(a, a+3);

     return a[1];
     
}

int main(){

    int t, cs = 1;
    cin>>t;

    while (t--)
    {
        int ans = whos_left();

         cout<<"Case "<<cs<<": "<<ans<<"\n";

         cs++;
    }

}