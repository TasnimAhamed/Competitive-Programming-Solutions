#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int lim = 1e9;

void solve() {
    int n; cin >> n;
    vector<string> pw;

    priority_queue<ll, vector<ll>, greater<ll>> pq;
    set<ll> st;

    for (int i = 1; i <= lim; i *= 2) {
    	pw.push_back(to_string(i));
    	pq.push(i);
    	st.insert(i);
    }

    ll ans = 0;
    for (int i = 0; i < n; i++) {
    	ll curr = pq.top();
    	// cout << curr << "\n";
    	pq.pop();
    	ans = curr;

    	string base = to_string(curr);

    	for (auto &p : pw) {
    		string nxt_str = base + p;

    		if (nxt_str.size() > 10) {
    			continue;
    		}
    		ll nxt_num = stoll(nxt_str);
    		if (nxt_num > lim) {
    			continue;
    		}

    		if (!st.count(nxt_num)) {
    			pq.push(nxt_num);
    			st.insert(nxt_num);
    		}
    	}
    }

    cout << ans << "\n";

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