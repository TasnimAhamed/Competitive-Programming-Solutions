#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<ll> v(n);
    for (auto& x : v) {
        cin >> x;
    }

    ll total = 0, cnt1 = 0, cnt2 = 0, sum2 = 0;
    for (auto x : v) {
        if (x >= 2) {
            sum2 += x;
            ++cnt2;
            total += (x - 2) / 2;
        }
        else {
            ++cnt1;
        }
    }

    // cout << total << " " << cnt1 << " " << cnt2 << " " << sum2 << "\n";

    if (cnt2 == 0) {
        cout << 0 << "\n";
        return;
    }

    if (cnt2 == 1) {
        if (sum2 >= 3) {
            ll ss = sum2 / 2;
            ll extra = min(cnt1, ss);
            // cout << extra << "\n";

            cout << sum2 + extra << "\n";
        } 
        else {
            if (cnt1 >= 1) {
                cout << 3 << "\n";
            } 
            else {
                cout << 0 << "\n";
            }
        }
        return;
    }

    ll extra = min(cnt1, total);
    // cout << extra << "\n";

    cout << sum2 + extra << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}