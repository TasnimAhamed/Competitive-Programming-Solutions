#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) {
    	cin >> x;
    }
    int op_cnt = 0;
    vector<int> op;
    for (int i = n - 1; i >= 0; i--) {
    	if (v[i] > 0) {
    		if (op_cnt % 2 == 0) {
    			++op_cnt;
    			op.push_back(i + 1);
    		}
    	}
    	else {
    		if (op_cnt % 2) {
    			++op_cnt;
    			op.push_back(i + 1);
    		}
    	}
    }
    cout << op_cnt << "\n";
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