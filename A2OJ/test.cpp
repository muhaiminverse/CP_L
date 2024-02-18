#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
int main()
{
    
    optimize();
    
    vector<int>frd = {0, 6, 7, 2, 3, 5, 1, 4};

    vector<int>presents(frd.size());

    presents[ frd[1] ] = 1; 
    presents[ frd[2] ] = 2; 
    presents[ frd[3] ] = 3; 
    presents[ frd[4] ] = 4; 
    presents[ frd[5] ] = 5; 
    presents[ frd[6] ] = 6; 
    presents[ frd[7] ] = 7; 

    for(auto i : presents) cout << i << " ";

    cout << "\n";

    cout << "0 6 3 4 7 5 1 2" << endl;
    
    
    return 0;
}