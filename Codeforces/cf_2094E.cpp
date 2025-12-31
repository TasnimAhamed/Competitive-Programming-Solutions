#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> bitCount(32, 0);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int b = 0; b < 32; ++b) {
            if (a[i] & (1 << b)) {
                bitCount[b]++;
            }
        }
    }

    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ll res = 0;
        for (int b = 0; b < 32; ++b) {
            int bit = (a[i] >> b) & 1;
            if (bit) {
                res += 1LL * (n - bitCount[b]) * (1 << b);
            } else {
                res += 1LL * bitCount[b] * (1 << b);
            }
        }
        ans = max(ans, res);
    }

    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}
