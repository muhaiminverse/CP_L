#include<bits/stdc++.h>
using namespace std;

int main(){

    string n,m;
    stack<char>a;
    queue<char>b;
    bool flag = true;
    cin>>n>>m;

    for (int i = 0; i < n.size(); i++)
    {
       a.push(n[i]);
    }
    for (int i = 0; i < m.size(); i++)
    {
       b.push(m[i]);
    }
    
    while (!a.empty())
    {
        if(a.top() == b.front()){
            a.pop();
            b.pop();
        }
        else{
            flag = false;
            break;
        }
    }
    
    if(flag)    cout<<"YES";
    else    cout<<"NO";


    // string n,m;
    // cin>>n>>m;

    // reverse(n.begin(), n.end());

    // if(n==m)    cout<<"YES";
    // else    cout<<"NO";
}