#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, n; cin >> a >> b >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    ll ans = 0, curr = b;
    for (auto x : v) {
    	if((curr + x) <= a) {
    		curr += x;
    	}
    	else{
    		// cout << "Curr: " << curr << "\n";
    		ans += (curr - 1);
    		curr = 1;
    		curr = min(curr + x, 1LL * a);
    	}
    }
    ans += (curr - 1);
    cout << ans + 1 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}