#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    set<int> st;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	st.insert(x);
    	mp[x]++;
    }
    int prev = *st.begin() - 1;
    int cnt = 0, mx = 0, ff = -1, ss = -1;
    pair<int, int> ans;
    for (auto x : st) {
    	if (x == prev + 1 and mp[x] >= k) {
    		++cnt;
    		if (ff == -1) {
    			ff = x;
    		}
    		ss = x;
    	}
    	else {
    		if (cnt > mx) {
    			mx = cnt;
    			ans = {ff, ss};
    			ff = -1;
    			ss = -1;
    		}
    		cnt = 0;
    		if (mp[x] >= k) {
    			ff = x;    			
    			ss = x;
    			++cnt;
    		}
    	}
    	prev = x;
    }

    if (cnt > mx) {
		mx = cnt;
		ans = {ff, ss};
		ff = -1;
		ss = -1;
	}

    if (mx == 0) {
    	cout << -1 << "\n";
    }
    else {
    	cout << ans.first << " " << ans.second << "\n";
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