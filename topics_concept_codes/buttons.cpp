#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc124/tasks/abc124_a

int main()
{

    int a, b;
    cin >> a >> b;

    if ( a == b){
        cout << a + b << endl;
    }
    else if( a > b){
        cout << a + a-- << endl;
    }
    else{
        cout << b + (b-1) << endl;
    }

}
