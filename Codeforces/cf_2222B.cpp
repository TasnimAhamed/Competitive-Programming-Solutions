#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
   	int n, m;
	cin >> n >> m;

	vector<ll> odds, evens;
	ll total = 0;

	for (int i = 1; i <= n; ++i) {
	    ll val; cin >> val;
	    total += val;

	    if (i % 2 != 0) {
	    	odds.push_back(val);
	    }
	    else {
	    	evens.push_back(val);
	    }
	}

	sort(odds.rbegin(), odds.rend());
	sort(evens.rbegin(), evens.rend());

	bool odd = false, even = false;
	int odd_idx = 0, even_idx = 0;

	ll marked_total = 0;
	for (int i = 0; i < m; ++i) {
	    int x; cin >> x;

	    if (x % 2 != 0) {
	        if (odd_idx < odds.size()) {
	            if (odds[odd_idx] > 0) {
	                marked_total += odds[odd_idx];
	                odd_idx++;
	                odd = true;
	            } 
	            else {
	                if (!odd) {
	                    marked_total += odds[odd_idx];
	                    odd_idx++;
	                    odd = true;
	                }
	            }
	        }
	    } 
	    else {
	        if (even_idx < evens.size()) {
	            if (evens[even_idx] > 0) {
	                marked_total += evens[even_idx];
	                even_idx++;
	                even = true;
	            } 
	            else {
	                if (!even) {
	                    marked_total += evens[even_idx];
	                    even_idx++;
	                    even = true;
	                }
	            }
	        }
	    }
	}

	cout << total - marked_total << "\n";
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