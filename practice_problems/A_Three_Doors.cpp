#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
int main()
{
    
    optimize();
    
    int t;
    cin >> t;

    while (t--) 
    {
        int key;
        cin >> key;

    vector<int> v(4);
    for (int i = 1; i <= 3; i++) cin >> v[i];

    if( v[key] != 0 && v[v[key]] != 0 ) cout << "YES" << endl;
    else cout << "NO" << endl;

    }


    return 0;
}