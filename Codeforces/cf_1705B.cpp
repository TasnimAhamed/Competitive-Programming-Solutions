#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto& x : v) {
    	cin >> x;
    }
    ll sum = 0;
    for (int i = 0; i < n - 1; i++) {
    	if (sum and !v[i]) {
    		++sum;
    	}
    	else {
    		sum += v[i];
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