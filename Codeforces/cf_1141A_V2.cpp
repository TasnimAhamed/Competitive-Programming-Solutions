#include<bits/stdc++.h>
using namespace std;
using ll = long long;

// Not Worked
int get_cnt(int n, int m) {
	if (n == m) {
		return 0;
	}
	if (m < n) {
		return -1;
	}

	int ans = -1;

	if (m % 2 == 0) {
		int res = get_cnt(n, m / 2);

		if (res != -1) {
			ans = res + 1;
		}
	}

	if (m % 3 == 0) {
		int res = get_cnt(n, m / 3);

		if (res != -1) {
			if (ans != -1) {
				ans = res + 1;
			}
			else {
				ans = min(ans, res + 1);
			}
		}
	}

	return ans;

}

void solve() {
    int n, m;

    if (m % n == 0) {
    	cout << -1 << "\n";
    	return;
    }

    int ans = get_cnt(n, m);

    cout << ans << "\n";

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