#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;
    vector<int>a;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]!= '+'){
            int n = s[i] - '0';
            a.push_back(n);
        }
    }
    
    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i];
        if(i<=a.size() - 2 && a.size() >1)
        cout<<'+';
    }
    
}