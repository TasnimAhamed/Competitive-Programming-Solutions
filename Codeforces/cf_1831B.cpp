#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), c;
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }
    map<int, int> ma, mb;
    int mx = 0, cnt = 1;
    for (int i = 1; i < n; i++) {
    	if (a[i] == a[i - 1]) {
    		++cnt;
    	}
    	else {
    		ma[a[i - 1]] = max(ma[a[i - 1]], cnt);
    		cnt = 1;
    	}
    }
    ma[a[n - 1]] = max(ma[a[n - 1]], cnt);

    mx = 0, cnt = 1;
    for (int i = 1; i < n; i++) {
    	if (b[i] == b[i - 1]) {
    		++cnt;
    	}
    	else {
    		mb[b[i - 1]] = max(mb[b[i - 1]], cnt);
    		cnt = 1;
    	}
    }
    mb[b[n - 1]] = max(mb[b[n - 1]], cnt);

    int ans = 0;
    for (auto [key, val] : ma) {
    	ans = max(ans, mb[key] + val);
    }
    for (auto [key, val] : mb) {
    	ans = max(ans, ma[key] + val);
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