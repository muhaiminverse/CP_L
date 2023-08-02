#include<bits/stdc++.h>
using namespace std;

int main(){

string s;
cin>>s;
stack<char>st;
queue<char>qu;

for (int i = 0; i < s.size(); i++)
    st.push(s[i]);

for (int i = 0; i < s.size(); i++)
    qu.push(s[i]);

bool ispal = true;

while (!st.empty())
{
    if(st.top() == qu.front()) 
    {
        st.pop();
        qu.pop();
    }
    else   
        {
            ispal = false;
            break;
        }
}

if(ispal)
    cout<<"Palindrom";
else
    cout<<"Not palindrom";
}