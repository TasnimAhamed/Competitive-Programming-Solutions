#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    vector<int> ans;
    for (int i = 0; i < n; i++) {
    	int mx = 0, mn = 0;
    	for (int j = i + 1; j < n; j++) {
    		if (v[i] > v[j]) {
    			++mx;
    		}
    		else if(v[i] < v[j]) {
    			++mn;
    		}
    	}
    	ans.push_back(max(mx, mn));
    }
    for (int i = 0; i < n; i++) {
    	cout << ans[i] << (i == n - 1 ? "\n" : " ");
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