#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    if (n <= 4) {
    	cout << "-1\n";
    	return;
    }

    if (n == 5) {
    	cout << "1 3 5 4 2\n";
    	return;
    }

    for (int i = 1; i <= n; i += 2) {
    	if (i != 3) cout << i << " ";
    }
    cout << "3 6 ";

    for (int i = 2; i <= n; i += 2) {
    	if (i != 6) cout << i << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}