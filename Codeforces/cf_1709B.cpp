#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q; cin >> n >> q;
    vector<ll> v(n + 1, 0);
    for (int i = 1;i <= n; i++) {
        cin >> v[i];
    }
    vector<ll> pref(n + 1, 0), suff(n + 1, 0);
    for (int i = 1; i < n; i++) {
        pref[i + 1] = max(0LL, v[i] - v[i + 1]);
    }

    for (int i = 1; i <= n; i++) {
        pref[i] += pref[i - 1];
    }

    for (int i = n - 1; i >= 1; i--) {
        suff[i] = max(0LL, v[i + 1] - v[i]);
    }

    for (int i = n - 1; i >= 1; i--) {
        suff[i] += suff[i + 1];
    }

    while (q--) {
        int s, t; cin >> s >> t;
        if (s < t) {
            cout << pref[t] - pref[s] << "\n";
        }
        else {
            cout << suff[t] - suff[s] << "\n";
        }
    }
    
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