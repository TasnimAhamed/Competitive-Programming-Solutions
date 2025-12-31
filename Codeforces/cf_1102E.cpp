#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 998244353;
void solve() {
    int n; cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    	mp[v[i]] = i;
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
    	if(i) {
    		ans *= 2;
    		ans %= mod;
    	}
    	int idx = mp[v[i]];
    	while(i < idx) {
    		++i;
    		idx = max(idx, mp[v[i]]);
    	}
    }

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}