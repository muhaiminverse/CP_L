#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    vector<int>ans;

    for (int i = 0; i < n; i++)
    {
        ans[v[i] - 1] = i + 1;
    }

    for(auto i : ans) cout << i << " ";
    
    

    return 0;
}
