#include<bits/stdc++.h>
using namespace std;

int main() {
  long long int h,e;

  while(cin>>h>>e){
        if(h>e){
        cout<<(h-e)<<'\n';
        }
        else{
        cout<<(e-h)<<'\n';
        }
  }

  return 0;
}