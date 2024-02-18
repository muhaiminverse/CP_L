#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; ++i)

int main(void) {
	string X;
	int a;
	int ans = 0;

	cin >> X;
	int n = X.size();

	rep(i, n - 4) {
		a = (int)(X[i] - '0');
		ans = 10 * ans + a;
	}
	if (X[n - 3] >= '5')ans++;
	cout << ans << endl;
	return 0;
}
