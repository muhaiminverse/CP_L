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
        int n;
        cin >> n;

        string s;
        cin >> s;

        int idx1 = 0, idx2 = 0;

        if(s[0] == 'B'){
            idx1 = 0;
            for(int i = 0; i < n; i++){
                if(s[i] == 'B'){
                    idx2 = i;
                }
            }
        }
        else{
            for(int i = 0; i < n; i++){
            if(s[i] == 'B' && idx1 == 0){
                idx1 = i;
            }
            else if(s[i] == 'B' && idx1 != 0){
            idx2 = i;
            }
        }
        }

        int cnt = 0;
        if(idx1 > idx2) cnt = 1;
        else cnt = (idx2 - idx1) + 1;
        
        cout << cnt << endl; 
    }
    
    
    
    return 0;
}