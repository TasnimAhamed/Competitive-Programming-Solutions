#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll k, n; cin >> k >> n;
    while(k--) {
    	n *= 2;
    }
    cout << n << "\n";
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