#include<bits/stdc++.h>
using namespace std;

const int N = 102;
const int W = 1e5 +5;

long long dp[N][W];
int w[N], val[N];

long long knapsack(long long n, int cap ){
    //base case
    if(n == 0)  return 0;

    //if the dp[n][cap] is already calculated then return that value
    if(dp[n][cap] != -1)    return dp[n][cap];

    //corner case:
        //if the cap is less then weight then it will give nagetive ans 
    if(w[n] > cap){
    long long ans =  knapsack(n-1, cap);
    dp[n][cap] = ans;
    return ans;  
    } 

    //calculation
    long long ans1 = val[n] + knapsack(n-1, cap-w[n]); // with curent value 
    long long ans2 =  knapsack(n-1, cap);  // without current value  

    long long ans = max(ans1, ans2);
    dp[n][cap] = ans; //store the ans on dp 

    return ans;
   



}

int main(){
  int n, cap;
    cin >> n >> cap;

    for(int i = 1 ; i <= n ; i++) {
        cin >> w[i] >> val[i];
    }

    for(int i = 0 ; i <= n ; i++) {
        for(int j = 0 ; j <= cap ; j++) {
            dp[i][j] = -1;
        }
    }

    cout << knapsack(n, cap) << "\n";
    return 0;
}

/*

*/ 