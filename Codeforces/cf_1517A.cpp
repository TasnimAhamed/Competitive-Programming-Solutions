#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;

    ll pw = 1, cnt = 0;
    while (n >= 2050) {
        while ((pw * 2050) <= n) {
            pw *= 10;
        }
        pw /= 10;
        n -= (pw * 2050);
        pw = 1;
        ++cnt;
    }

    if (n) {
        cout << -1 << "\n";
    }
    else {
        cout << cnt << "\n";
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
