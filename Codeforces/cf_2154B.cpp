#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1), pref_mx(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
        pref_mx[i] = max(pref_mx[i - 1], v[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) {
            v[i] = pref_mx[i];
        }
    }
    
    ll ans = 0; 
    for (int i = 1; i < n; i++)
    {
        if (i & 1 and (v[i] >= v[i + 1])) {
            int sub = (v[i] - v[i + 1] + 1);
            v[i] -= sub;
            ans += sub;
        }
        else if (i % 2 == 0 and v[i] <= v[i + 1]) {
            int sub = v[i + 1] - v[i] + 1;
            v[i + 1] -= sub;
            ans += sub;
        }
    }

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