#include<bits/stdc++.h>
using namespace std;

int main(){

int n,cnt=0;
cin>>n;

string s;
cin>>s;
stack<char>st;

    for (int i = 0; i < n; i++)
    {
        char now = s[i];
    if(now == '[' || now == '{' || now == '('){
            st.push(now);
        }
    else{
        if(st.empty())
        {
            cout<<"NO";
            return 0;
        }

        if(now == ']' && st.top()=='[')
        {
            st.pop();
        }
        else if(now == ')' && st.top()=='(')
        {
            st.pop();
        }
        else if(now == '}' && st.top()=='{')
        {
            st.pop();
        }
        else{
            cout<<"NO";
            return 0;
            
        }
        }
    }

(st.empty()) ? cout<<"YES" : cout<<"NO";


}