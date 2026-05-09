#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> v(n + 2, 0);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    int mx = *max_element(v.begin(), v.end());
   	vector<ll> ans;
    while (k--) {
    	char ch;
    	ll l, r;
    	cin >> ch >> l >> r;
    	if (ch == '+') {
    		if (mx >= l and mx <= r) {
    			++mx;
    		}
    	}
    	else {
    		if (mx >= l and mx <= r) {
    			--mx;
    		}
    	}

    	ans.push_back(mx);
    }
    
    int sz = ans.size();

    for (int i = 0; i < sz; i++) {
    	cout << ans[i] << (i == sz - 1 ? "\n" : " ");
    }
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