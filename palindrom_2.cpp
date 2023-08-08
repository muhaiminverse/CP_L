#include <bits/stdc++.h>
using namespace std;

bool check_pal(string a){

    int n = a.size();
    bool track = true;
    for (int i = 0; i < n/2; i++)
    {
        if(a[i] != a[n-i-1])
        {
            track = false;
            break;
        }
    }
   return track;
    

}
string check_set(string a){
    int n = a.size();

    for (int i = 0; i <= n; i++)
    {
        string first_half = a.substr(0, i); 
        string second_half = a.substr(i, n- i); 

        for (char j = 'a'; j <= 'z'; j++)
        {
            string b = first_half;
            b+=j;
            b+=second_half;
            if(check_pal(b)){
                return b;
            }
        }
        
    }
    return "NA";
}

int main(){

    string a;
    cin>>a;
    cout<<check_set(a);
}