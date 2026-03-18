#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());

    auto isOK = [&] (int mid) {
    	int cnt = 0;
    	for (auto x : v) {
    		if (x >= mid) {
    			++cnt;
    		}
    	}

    	return cnt >= k;
    };

    int lo = 1, hi = v.back();
    while (lo <= hi) {
    	int mid = lo + (hi - lo) / 2;
		// cout << mid << "\n";
    	if (isOK(mid)) {
    		lo = mid + 1;
    	} 
    	else {
    		hi = mid - 1;
    	}
    }

    cout << hi << "\n";
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