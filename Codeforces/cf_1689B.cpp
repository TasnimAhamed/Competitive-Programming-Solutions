#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int cnt = 1;
    set<int> st;
    for (auto& x : v) {
    	cin >> x;
    	st.insert(cnt);
    	++cnt;
    }
    if (n == 1) {
    	cout << -1 << "\n";
    	return;
    }
    vector<int> ans;
    int i = 0;
    while (!st.empty() and i < n) {
    	int val = *st.begin();
    	if (val != v[i]) {
    		ans.push_back(val);
    		st.erase(st.begin());
    	}
    	else {
    		auto it = next(st.begin());
    		if (it != st.end()) {
    			val = *it;
    			ans.push_back(val);
    			st.erase(it);
    		}
    		else {
    			ans.push_back(val);
    			st.erase(st.begin());
    		}
    	}
    	++i;
    }
    for (int i = n - 1; i > 0; i--) {
    	if (ans[i] == v[i]) {
    		swap(ans[i], ans[i - 1]);
    		break;
    	}
    }
    for (int i = 0; i < n; i++) {
    	cout << ans[i] << (i  == n - 1 ? "\n" : " ");
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