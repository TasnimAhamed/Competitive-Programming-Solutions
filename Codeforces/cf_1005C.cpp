#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (auto &x : v) {
    	cin >> x;
    	mp[x]++;
    }

    vector<ll> pw;
    for (int i = 0; i < 63; i++) {
    	pw.push_back(1LL << i);
    }

    int ans = 0;
    for (auto x : v) {
    	int lw = upper_bound(pw.begin(), pw.end(), x) - pw.begin();
    	for (int i = lw; i < pw.size(); i++) {
    		int need = pw[i] - x;
    		if ((need == x and mp[x] >= 2) or (need != x and mp[need])) {
    			// cout << x << " " << need << "\n";
    			++ans;
    			break;
    		}
    	}
    }

    cout << n - ans << "\n";
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