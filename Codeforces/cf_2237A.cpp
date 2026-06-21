#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int mn = v[0], sum = 0;
    for (auto x : v) {
    	if (x >= mn) {
    		sum += mn;
    	}
    	else {
    		mn = x;
    		sum += mn;
    	}
    }

    cout << sum << "\n";
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