#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k; cin >> n >> k;

    ll lo = 0, hi = 2e9;
    while(lo < hi) {
        ll mid = (lo + hi) / 2;

        ll total = (mid + 1) * (2 * n + mid) / 2;

        if (total >= k) {
            hi = mid;
        }
        else {
            lo = mid + 1;
        }
    }

    cout << lo << "\n";
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