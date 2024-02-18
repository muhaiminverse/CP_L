#include<bits/stdc++.h>
using namespace std;

//https://atcoder.jp/contests/abc169/tasks/abc169_a?lang=en


int main()
{

    int a, b;
    cin >> a >> b;

    int cnt = 0;

    for(int i = a ; i <= b ; i++)
    {
        if( a <= i && i <= b) cnt++;
    }

    cout << cnt << endl;

}
