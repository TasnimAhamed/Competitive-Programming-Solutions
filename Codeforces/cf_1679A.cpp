#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;

    if(n&1 or n < 4) {
    	cout << -1 << "\n";
    	return;
    }

    ll mx = n / 4;
    ll mn = n / 6;

    if(n % 6 != 0) {
    	mn++;
    }

    cout << min(mn, mx) << " " << max(mn, mx) << "\n";




}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}