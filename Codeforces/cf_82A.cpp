#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	map<int, string> mp;
	mp[1] = "Sheldon";
	mp[2] = "Leonard";
	mp[3] = "Penny";
	mp[4] = "Rajesh";
	mp[5] = "Howard";

    int n; cin >> n;
    ll cnt = 0, idx = 0, curr = 5, total = 0;

    while (total < n) {
    	total += curr;
    	curr *= 2;
    	cnt = (1 << idx);
    	++idx;
    }
    curr /= 2;
    total -= curr;
    int rem = n - total;

    idx = (rem + cnt - 1) / cnt;

    // cout << idx << "\n";

    cout << mp[idx] << "\n"; 
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