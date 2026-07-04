#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int odd1 = 0, even1 = 0;
    int odd2 = 0, even2 = 0;
    for (int i = 0; i < n; i++) {
    	if (i % 2 == 0) {
    		if (v[i] & 1) {
    			odd1++;
    		}
    		else {
    			even1++;
    		}
    	}
    	else {
    		if (v[i] & 1) {
    			odd2++;
    		}
    		else {
    			even2++;
    		}
    	}
    }

    if ((odd1 + even2) == n or (odd2 + even1) == n or (odd1 + odd2) == n or (even1 + even2) == n) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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