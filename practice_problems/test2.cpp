#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 1e4 + 10;
ll dp[N];

ll func(int idx, int arr[]){
    if(idx == 1 || idx == 2) return dp[idx];
    if(dp[idx] != -1) return dp[idx];
    ll ans = 0;
    for(int i = idx - 2; i >= 1;i--){
        ans = max(ans, arr[idx] + func(i, arr));
    }
    return dp[idx] = ans;
}

 
int main(){
    
    memset(dp, -1, sizeof(dp));
    int cs = 1;
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int arr[n + 1];
        for(int i = 1;i <= n;i++) cin >> arr[i];
        if(n == 1){
            cout << "Case " << cs << ": " << arr[1] << endl;
            dp[1] = -1;
        }
        else{
            dp[1] = arr[1];
            dp[2] = arr[2];
            ll a = func(n, arr );
            ll b = func(n - 1, arr);
            cout << "Case " << cs << ": " << max(a, b) << endl;
        }
        for(int i = 1;i <= n;i++) dp[i] = -1;
        cs++;
     }
}