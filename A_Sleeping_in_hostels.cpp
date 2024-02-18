#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while (cin>>s)
    {
        int n = s.size();
        int a[n] = {0}; 
        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'X'){
                    a[i] = 1;
                    a[i-1]=1;
                    a[i+1]=1;

            }
        }
        
       int m = count(a, a+n, 0);

        cout<<m<<endl;
        
        
    }
    
}