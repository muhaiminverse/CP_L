#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main() {

    ll t=1, cs=1;
    cin>>t;
    while(t--) {
        ll n;
        cin >> n;
        ll arr[n+1];
        for(ll i=1; i<=n; i++) cin >> arr[i];

        ll dp[n];
        dp[0] = 0, dp[1] = arr[1];
        for(ll i=2;i<=n; i++)
            dp[i] = max(dp[i-1], arr[i] + dp[i-2]);

        cout << "Case " << cs << ": " << dp[n] << endl;
        cs++;
    }

/*
2
1
10
4
5 1 1 6
*/
    return 0;
}