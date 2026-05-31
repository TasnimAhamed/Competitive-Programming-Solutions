#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }
    vector<ll> pref(n + 2, 0), suff(n + 2, 0);
    for (int i = 1; i <= n; i++) {
    	pref[i] = pref[i - 1] + abs(v[i]);
    }
    for (int i = n; i >= 1; i--) {
    	suff[i] = suff[i + 1] + v[i];
    }

    int idx = -1;
    ll mxSum = suff[1];
    for (int i = 1; i <= n; i++) {
    	if (v[i] > 0) {
    		ll curr = pref[i - 1] - v[i] + suff[i + 1];
    		if (curr > mxSum) {
    			mxSum = curr;
    			idx = i;
    		}
    	}
    }

    if (idx == -1) {
    	cout << 0 << "\n";
    	cout << "\n";
    	return;
    }
    int op_cnt = 0;
    vector<int> op;
    for (int i = idx - 1; i >= 1; i--) {
    	if (v[i] > 0) {
    		if (op_cnt % 2 == 0) {
    			++op_cnt;
    			op.push_back(i);
    		}
    	}
    	else {
    		if (op_cnt % 2) {
    			++op_cnt;
    			op.push_back(i);
    		}
    	}
    }

    op.push_back(idx);
    cout << op_cnt + 1 << "\n";
    for (auto &x : op) {
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