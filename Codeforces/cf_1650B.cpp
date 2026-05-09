#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int l, r, a; cin >> l >> r >> a;
    
    ll res = r / a + r % a;
    int left = (r / a) * a - 1;

    if (left >= l) {
    	ll new_res = left / a + left % a;
    	cout << max(res, new_res) << "\n";
    }
    else {
    	cout << res << "\n";
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