#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    	v[i] += v[i - 1];
    }

    while(k--) {
        int l, r, x; cin >> l >> r >> x;
        ll total = v[n] - (v[r] - v[l-1]) + 1LL * (r - l + 1) * x; 
        if(total & 1) {
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
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