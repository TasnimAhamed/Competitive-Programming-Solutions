#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    map<int, int> freq;
    for (auto &x : v) {
    	cin >> x;
    	freq[x]++;
    }
    for (auto [key, val] : freq) {
    	if(val % k != 0) {
    		cout << 0 << "\n";
    		return;
    	}
    }
    map<int, int> mp;
    int l = 0, r = 0;
    ll ans = 0;
    while(l < n) {
    	while(r < n and mp[v[r]] + 1 <= freq[v[r]] / k) {
    		mp[v[r]]++;
    		r++;
    	}
    	ans += (r - l);
    	// cout << ans << "\n";
    	mp[v[l]]--;
    	++l;
    }

    cout << ans << "\n";
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