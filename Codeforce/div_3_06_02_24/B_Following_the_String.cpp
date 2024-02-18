#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
int main()
{
    
    optimize();
    
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        

        map<int,char>mp;
        string s = "";

        for(auto cnt : v){
                if(mp.find(cnt) == mp.end()){
                    mp[cnt] = 'a';
                    s+='a';
                }
                else{
                    mp[cnt]++;
                    s+=mp[cnt];
                }
        }

        cout << s << endl;
    }
    
    
    return 0;
}