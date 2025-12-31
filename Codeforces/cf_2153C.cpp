#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++) {
    	ll x; cin >> x;
    	mp[x]++;
    }
    ll ans = 0, cnt = 0;
    vector<ll> rem;
    for (auto [key, val] : mp) {
    	ans += (val/2) * 2LL * key;
    	cnt += (val/2) * 2LL;
    	if(val&1) {
    		rem.push_back(key);
    	}
    }

    if(ans == 0) {
    	cout << ans << "\n";
    	return;
    }

    sort(rem.rbegin(), rem.rend());
    for (int i = 0; i < (int)rem.size() - 1; i++) {
    	ll ff = rem[i], ss = rem[i + 1];
    	// cout << ff << " " << ss << "\n";
    	if ((ans + ss) > ff) {
    		cout << (ans + ff + ss) << "\n";
    		return;
    	}
    }

    for (int i = 0; i < rem.size(); i++) {
    	if(ans > rem[i]) {
    		cout << ans + rem[i] << "\n";
    		return;
    	}
    }

    cout << (cnt > 2 ? ans : 0) << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}