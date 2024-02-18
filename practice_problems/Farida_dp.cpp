#include<bits/stdc++.h>
using namespace std;
#define llt long long
const llt N = 1e5 + 5;

llt h[N];
llt dp[N];

int main() {
    llt t;
    int cs = 1;
    cin>>t;
    while (t--)
    {
    llt n;
    cin >> n;
    for(llt i = 1 ; i <= n ; i++) {
        cin >> h[i];
    }

    for(llt i = 1 ; i <= n ; i++) {
        dp[i] = -1;
    }
    
    dp[0] = 0, dp[1] = h[1];

    for(llt i = 2; i <=n; i++)
    {       
        dp[i]= max(dp[i-1], h[i] + dp[i-2]);
    }

    cout << "Case " << cs << ": " << dp[n] << '\n';
    cs++;
    }
    
    return 0;
}

/*
3
5
1 2 3 4 5
1
10
4
5 1 1 6
*/