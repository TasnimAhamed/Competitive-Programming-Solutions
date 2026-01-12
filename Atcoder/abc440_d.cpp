#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, q; cin >> n >> q;
    vector<int> v(n), missing;
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());
    // for (auto x : v) {
    // 	cout << x << " ";
    // }
    // cout << "\n";
    int prev = 0;
    for (auto x : v) {
    	if(prev + 1 != x) {
    		missing.push_back(prev + 1);	
    	}
    	prev = x;
    }
    missing.push_back(prev + 1);
    // for (auto x : missing) {
    // 	cout << x << ' ';
    // }
    // cout << "\n";
    while(q--) {
    	int x, y; cin >> x >> y;
    	int idx = lower_bound(v.begin(), v.end(), x) - v.begin();
    	
    	if(idx == n) {
    		cout << (x + y - 1) << "\n";
    	}
    	else {
    		int missing_start = x;
    		if(v[idx] == x) {
    			int nxt_missing = lower_bound(missing.begin(), missing.end(), x) - missing.begin();
    			missing_start = missing[nxt_missing];
    		}

    		idx = lower_bound(v.begin(), v.end(), missing_start) - v.begin();
    		// cout << "idx " << idx << "\n";
    		int last = missing_start + y  - 1;
			// cout << "Last: " << last << "\n";
			int last_idx = lower_bound(v.begin(), v.end(), last) - v.begin();

			// cout << "last_idx: " << last_idx << "\n";
			int mid =  last_idx - idx;

			if(last_idx != n and v[last_idx] == last) {
				++mid;
			}

			int ans = last + mid;

			// cout << ans << "\n";
			
			int missing_idx = lower_bound(v.begin(), v.end(), ans) - v.begin();
			// cout << missing_idx << "\n";
			if(missing_idx == n or v[missing_idx] == ans) {
				// // cout << "I am here\n";
				missing_idx = lower_bound(missing.begin(), missing.end(), ans) - missing.begin();
				if(missing_idx == missing.size()) {
					cout << ans << "\n";
				}
				else {
					cout << missing[missing_idx] << "\n";
				}

			}
			else{
				cout << ans << "\n";
			}
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