#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{

    optimize();

    vector<int>v = {1,3,6,5,7,8,9,1,2,3,4};

    map<int, int>mp;

    for(auto i : v){
        mp[i]++;
    }



    return 0;
}
