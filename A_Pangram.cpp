#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    string s;
    cin>>s;

    unordered_set<char>pangram;

    for(char i : s){
        if (isupper(i)) i=tolower(i);
        if(isalpha(i))
            pangram.insert(i);
    }

    if(pangram.size() == 26)
    cout<<"YES";
    else
    cout<<"NO";
}