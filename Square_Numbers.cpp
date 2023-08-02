#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, r;
    while (cin>>a>>b) {
        if (a == 0 && b == 0) break; 
        
        c = 0;
        for (int i = a; i <= b; i++) {
             r = sqrt(i);
            if((r * r) == i){
            c++;
            }  
        }

        cout<<c<<"\n";
    }

}

/*
1 4
1 10
0 0


*/ 