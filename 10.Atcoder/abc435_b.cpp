#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) {
    	cin >> x;
    }

    vector<ll> pref(n+1, 0);
    for (int i = 0; i < n; i++)
        pref[i+1] = pref[i] + a[i];

    ll ans = 0;

    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            ll sum = pref[r+1] - pref[l];
            bool paisi = true;

            for (int i = l; i <= r; i++) {
                if(sum % a[i] == 0) {
                    paisi = false;
                    break;
                }
            }

            if (paisi) {
            	ans++;
            }
        }
    }

    cout << ans << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}