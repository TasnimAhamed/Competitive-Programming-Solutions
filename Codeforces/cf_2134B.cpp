#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<ll> v(n);
    
    for (auto &x : v) {
    	cin >> x;
    }

    for (auto &x : v) {
        x += (x % (k + 1) * k);
    }

    for (auto x : v) {
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