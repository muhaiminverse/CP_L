#include<bits/stdc++.h>
using namespace std;
int main(){

    int n, c = 0;
   
        cin>>n;
        long long val = 1e9;
        int a[n+1];

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(a[i]<val){
                val=a[i];
                c = 0;
                
            }

            if(a[i] == val){
                c++;
            }

        }
        

        if(c%2!= 0) cout<<"Lucky";
        else cout<<"Unlucky";
        
    
    
}