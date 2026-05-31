#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(n);
    for (auto& x : v) {
        cin >> x;
    }

    ll sum = 0, ans = v[0];
    for (int i = 0; i < n; i++) {
        sum += v[i];
        ll curr_height = sum / (i + 1);
        ans = min(ans, curr_height);
        cout << curr_height << (i == n - 1 ? "\n" : " ");
    }
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