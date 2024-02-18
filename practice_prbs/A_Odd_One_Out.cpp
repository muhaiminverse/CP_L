#include <bits/stdc++.h>
using namespace std;


void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << (a ^ b ^ c) << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int tt; cin >> tt; for (int i = 1; i <= tt; i++) {solve();}
	// solve();
}