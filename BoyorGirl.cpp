#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int c = 0 , f = 0;
    
    for (int i = 0; s[i] != '\0'; i++)
    {
        for (int j = i - 1; j>=0; j--)
        {
            if(s[i] == s[j]){
                f = 1;
                break;
            }
        }
        
        if(f == 0)  c++;
        f = 0;
    }
    
    if(c & 1 )
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";
    

    return 0;
}