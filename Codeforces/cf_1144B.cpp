#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> odd, even;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x & 1) {
    		odd.push_back(x);
    	}
    	else {
    		even.push_back(x);
    	}
    }
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    int odd_sz = odd.size();
    int even_sz = even.size();
    int sz = min(odd_sz, even_sz);

    if (abs(odd_sz - even_sz) <= 1) {
    	cout << 0 << "\n";
    }
    else {
    	if (odd_sz > even_sz) {
    		int ans = 0;
    		for (int i = 0; i < odd_sz - even_sz - 1; i++) {
    			ans += odd[i];
    		}
    		cout << ans << "\n";
    	}
    	else {
    		int ans = 0;
    		for (int i = 0; i < even_sz - odd_sz - 1; i++) {
    			ans += even[i];
    		}
    		cout << ans << "\n";
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