#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int gcd = 0;
    for (auto &x : v) {
    	cin >> x;
    	gcd = __gcd(gcd, x);
    }

    cout << v[n - 1] / gcd << "\n";
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