#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d;

    cin>>k>>l>>m>>n>>d;

    int sz = d+1;
    int c = 0;

    vector<int> a(sz);
    vector<int> b = {k,l,m,n}; 

    for (int i = 1; i <sz; i++)
        a[i]=-1;
    
    for(int x : b){
        
        for (int i = x; i < sz; i+=x)
                if(a[i] != 0){
                       a[i]=0;
                }
    }
    
    for (int i = 1; i <sz; i++)
        if(a[i]==-1)    c++;

    cout<<(d-c);
}

//ssh-keygen -t rsa -b 4096 -C "muhaiminverse@gmail.com"
