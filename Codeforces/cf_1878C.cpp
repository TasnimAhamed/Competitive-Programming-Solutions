#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    ll x; cin >> x;
    ll mn = 1LL * k * (k + 1) / 2;
    int ex = n - k;
    ll mx = 1LL * n * (n + 1) / 2 - 1LL * ex * (ex + 1) / 2;

    if(x >= mn and x <= mx) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
    }
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