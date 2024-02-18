#include<bits/stdc++.h>
using namespace std;

string ceheck_pal(string l){
    reverse(l.begin(),l.end());
    
    return l;
}


int main(){
    int k;
    string s;
    while (cin>>k>>s)
    {
        if(k==0)    break;

        string c = "";
        int  g = s.size()/k;
    for (int i = 0; i <=s.size(); i+=g)
    {
        
            if(i%g==0){
                string b =s.substr(i,g);
            c += ceheck_pal(b);
    }
        
    }
        cout<<c<<"\n"; 

}
}