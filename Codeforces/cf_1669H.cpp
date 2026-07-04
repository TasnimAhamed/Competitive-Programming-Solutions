#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> v(n);
	for (auto &x : v) {
		cin >> x;
	}

	int cnt[32] = {0};
	for (auto x : v) {
		for (int i = 0; i < 31; i++) {
			if ((x >> i) & 1) {
				cnt[i]++;
			}
		}
	}

	for (int i = 30; i >= 0; i--) {
		int curr = cnt[i], need = n - curr;
		if (k >= need) {
			cnt[i] = n;
			k -= need;
		}
	}

	ll ans = 0;
	for (int i = 30; i >= 0; i--) {
		if (cnt[i] == n) {
			ans += (1LL << i);
		}
	}

	cout << ans << "\n";
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