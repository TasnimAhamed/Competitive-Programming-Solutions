#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string ans(n, 'a');

    ll nn = (-1 + sqrtl(1 + 4LL * 2 * k)) / 2;
    ll total = 1LL * nn  * (nn + 1) / 2;

    if (total < k) {
    	++nn;
    }
    cerr << nn << "\n";

    int ff_idx = n - 1 - nn;
    int ss_idx = n - (k - total);
    if (total == k) {
    	ss_idx = ff_idx + 1;
    }
    ans[ff_idx] = ans[ss_idx] = 'b';
    cerr << ff_idx << " " << ss_idx << "\n";

    cout << ans << "\n";
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