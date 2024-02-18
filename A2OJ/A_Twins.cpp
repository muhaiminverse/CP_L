#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
int main()
{
    
    optimize();
    
    int n;
    cin >> n;

    vector<int> v(n);

    int sum = 0, currentSum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }
    
    sort(v.begin(), v.end());

    int halfSum = sum /2;

    for (int i = n-1; i >= 0; i--)
    {
        currentSum += v[i];
        cnt++;
        if (currentSum>halfSum) break;

    }
    
    cout << cnt << endl;
    
    return 0;
}