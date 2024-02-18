#include<bits/stdc++.h>
using namespace std;

int main(){
    

//takeing array
        int n;
        cin>>n;
        int a[n];
    for (int i = 0; i < n; i++) cin>>a[i];

      int  max_n = a[0];
      int  min_n = a[0];
        int idx = 0, idy = 0;


    for (int i = 1; i < n; i++){
          
        if(a[i]>max_n){
            max_n = a[i];
            idx = i;
        }

        if(a[i]<min_n){
            min_n = a[i];
            idy = i;
        }
         
    } 
    swap(a[idx],a[idy]);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";


}