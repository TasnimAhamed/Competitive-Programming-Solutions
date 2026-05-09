#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int ans = 0;
    for (auto &x : v) {
    	cin >> x;
    	if (x != 1) {
    		ans += x;
    	}
    }

    if (v[n - 1] == 1) ++ans;

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