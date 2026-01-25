#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, q;  cin >> n >> q;

    vector<ll> a(n), b(n);
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }
    
    vector<ll> c(n);
    c[n - 1] = max(a[n - 1], b[n - 1]);
    for (int i = n - 2; i >= 0; i--) {
        c[i] = max({a[i], b[i], c[i + 1]});
    }

    // for (int i = 0; i < n; i++) {
    // 	cout << c[i] << " ";
    // }
    // cout << "\n";


    vector<ll> pref(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + c[i];
    }

    while (q--) {
        int l, r;
        cin >> l >> r;
        // cout << pref[l - 1] << " " << pref[r] << "\n";
        cout << pref[r] - pref[l - 1] << " ";
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