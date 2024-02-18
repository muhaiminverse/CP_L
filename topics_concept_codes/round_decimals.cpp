#include <bits/stdc++.h>
using namespace std;

// https://atcoder.jp/contests/abc226/tasks/abc226_a?lang=en

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    int ans = 0, a;

    for(int i=0; i<n-4; i++)
    {
        a = (int) (s[i] - '0');
        ans = 10 * ans + a;
    }


    if(s[n-3] >= '5') ans++ ;

    cout << ans << endl;

    return 0;
}

