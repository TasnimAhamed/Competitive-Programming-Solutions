#include<bits/stdc++.h>
using namespace std;
using ll = long long;


void solve() {
    int n, m; cin >> n >> m;

    if (m % n != 0) {
    	cout << -1 << "\n";
    	return;
    }

    int ratio = m / n;
    int cnt = 0;
    while (ratio % 3 == 0) {
    	ratio /= 3;
    	cnt++;
    }

    while (ratio % 2 == 0) {
    	ratio /= 2;
    	cnt++;
    }

    if (ratio != 1) {
    	cout << -1 << "\n";
    	return;
    }

    cout << cnt << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}