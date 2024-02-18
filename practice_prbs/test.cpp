#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        vector<int> a(x + 1);

        for (int i = 1; i <= x; i++) {
            cin >> a[i];
        }

        if (a[x] != 0 && a[a[x]] != 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
