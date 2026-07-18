#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int ans = 0;
    int st = 1, prev = v[0], cnt = 1;
    while (st < n) {
    	if ( 2 * v[st] > prev) {
    		++cnt;
    		prev = v[st];
    		if (cnt > k) {
    			++ans;
    		}
    	}
    	else {
    		prev = v[st];
    		cnt = 1;    		
    	}
    	++st;
    }

    cout << ans << "\n";
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