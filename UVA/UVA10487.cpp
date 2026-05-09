#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n;
	int tt = 0;
    while (cin >> n && n) {
    	++tt;

    	vector<int> v(n);
    	for (auto &x : v) {
    		cin >> x;
    	}
    	sort(v.begin(), v.end());
    	int m; cin >> m;
    	cout << "Case " << tt << ":\n";
    	while(m--) {
    		int x; cin >> x;
    		int closet = INT_MAX, ans = -1;
    		for (int i = 0; i < n; i++) {
    			for (int j = i + 1; j < n; j++){
    				int sum = v[i] + v[j];
    				if (abs(sum - x) < closet) {
    					closet = abs(sum - x);
    					ans = sum;
    				}
    			}
    		}
    		cout << "Closest sum to " << x <<" is " << ans << ".\n";
    	}

    }
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