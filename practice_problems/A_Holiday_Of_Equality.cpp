#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, e;
    cin>>n;
    vector< int>a;

    for (int  i = 0; i < n; i++)
    {
        cin>>e;
        a.push_back(e);
    }

   sort(a.begin(), a.end());
   int maxx = a[a.size()-1];

    int sum =0;
   for (int i = 0; i < a.size(); i++)
   {
    sum+= abs( maxx - a[i]);
   }

    cout<<sum;
    
    
}