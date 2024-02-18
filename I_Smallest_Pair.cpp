#include<bits/stdc++.h>
using namespace std;
int main(){

    int t,n;
    cin>>t;
    

    while (t--)
    {
        cin>>n;
        long long val = 1e9, temp = 0;
        int a[n+1];

        for (int i = 1; i <= n; i++)
        {
            cin>>a[i];
        }
        
        for (int i = 1; i < n; i++)
        {
            for (int j = i+1; j <=n; j++)
            {
                temp = (a[i]+a[j]+j-i);

                if(temp < val ){
                    val = temp;
                }
                
                
            }
            
        }

        cout<<val<<endl;
        
    }
    
}