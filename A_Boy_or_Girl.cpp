#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
    cin>>s;

    unordered_set<char> count;
 for(char c : s){
    if(isalpha(c))
    count.insert(c);
 }
    int size = count.size();
    if(size & 1 )
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";

}
