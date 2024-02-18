#include<bits/stdc++.h>
using namespace std;
    int n;
    int a[101];


float avg(int n ){
    if(n == 0)
        return a[0];
    int val = (a[n] + avg(n-1)) ;
    
    return val;
}

int main(){
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    printf("%.6f",(avg(n-1))/n);
    
    
}