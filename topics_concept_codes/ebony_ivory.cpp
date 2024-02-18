#include <bits/stdc++.h>

using namespace std;


int main(){

    int a, b, c;
    cin >> a >> b >> c;

   /*bool yes = false;

    for(int i = 0; i<=100; i++){
        for(int j = 0; j<=100; j++){
            int k = a*i + b*j;
            if( k == c && k < c){
                yes = true;
                break;
            }
        }
    }
*/
    if(a<b){
        c/=a;
        c%=b;
    }
    else{
        c/=b;
        c%=a;
    }
/*

    c/=b;
    c%=a;
*/


    cout << c << endl;
    if(c==0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
