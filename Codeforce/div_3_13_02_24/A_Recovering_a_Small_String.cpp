#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;

        string s = "";
        char a, b, c;

        for (int i = 0; i < 3; i++)
        {
            if(n>=26){
                n-=26;
                a = 'a' + n;
                s+=a;
            }
            else if(n < 25){
                n--;
                
                
            }
            
        }
        
        
        s+=b;
        s+=c;

        sort(s.begin(), s.end());

        cout << s << endl;


    }
    

    return 0;
}
