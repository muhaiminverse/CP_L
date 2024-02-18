#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,t;
    cin >> a >> b >> t;
    int k = 0;
    bool found = false;
    for(int i = a; i<=b; i++){
        if(i%t == 0){
            k = i;
            found = true;
            break;
        }
    }

    if(!found)
    cout << -1 << endl;
    else
    cout << k << endl;


}

//7

