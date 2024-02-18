#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    
    int n;
    cin >> n;
    
    int a[n];

    
    for(int i = 0 ; i < n; i++) cin >> a[i];
    
    int fr[n];
    
    //for(int i = 0 ; i < n; i++) fr[a[i]]++;
    for(int i = 0 ; i < n; i++) fr[a[i]]++;

    for(int i = 0; i < n; i++ ) cout << fr[i] << endl;
    
    /*
    10
    1 2 1 2 1 2 3 4 5 4
    */
}