#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    set<int> st;
    int cnt = 1;
    for (auto &x : v) {
    	cin >> x;
    	st.insert(cnt);
    	++cnt;
    }
    vector<int> ans(n);
    ans[0] = v[0];
    st.erase(v[0]);
    for (int i = 1; i < n; i++) {
    	if (v[i] > v[i - 1]) {
    		ans[i] = v[i];
    		st.erase(v[i]);
    	}
    	else {
    		ans[i] = *st.begin();
    		st.erase(st.begin());
    	}
    }
    int mx = ans[0];
    for (int i = 1; i < n; i++) {
    	mx = max(mx, ans[i]);
    	if (mx != v[i]) {
    		cout << -1 << "\n";
    		return;
    	}
    }

    for (auto x : ans) {
    	cout << x << " "; 
    }
    cout << "\n";
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