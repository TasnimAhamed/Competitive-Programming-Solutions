#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int get_count(int n, int k) {
	if (n <= 0) {
		return 1;
	}
	if (n == k) {
		return 1;
	}

	int mx1, mx2;
	if (n < k) {
		mx1 = 1 + get_count(n * 2, k);
		mx2 = 1 + get_count(n - 1, k);
	}
	else {
		mx2 = 1 + get_count(n - 1, k);
	}

	return min(mx1, mx2);
}

void solve() {
    int n, m; cin >> n >> m;
    if (n >= m) {
    	cout << n - m << "\n";
    }
    else {
    	int cnt = get_count(n, m);
    	cout << cnt << "\n";
    }
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