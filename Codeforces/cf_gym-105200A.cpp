#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    vector<ll> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    vector<ll> ans;
    ll curr = 0, mx = 0;
    for (auto x : v) {
    	curr += x;
    	if(curr < 0) {
    		curr = 0;
    	}
    	mx = max(curr, mx);
    	ans.push_back(mx);
    }

    for (auto x : ans) {
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