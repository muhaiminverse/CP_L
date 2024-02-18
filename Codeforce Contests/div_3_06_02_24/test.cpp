#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
int main()
{
    
    optimize();
    
    map<int,int> mp;

    mp.insert({1,1});
    mp.insert({2,1});
    mp.insert({3,2});

    for(auto i : mp) cout << i.first << " " << i.second << endl;
    
    
    return 0;
}