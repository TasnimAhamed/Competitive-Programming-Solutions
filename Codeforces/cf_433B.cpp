#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n + 1, 0), b(n + 1, 0);
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    	b[i] = a[i];
    }
    sort(b.begin(), b.end());
    for (int i = 1; i <= n; i++) {
    	a[i] += a[i-1];
    	b[i] += b[i-1];
    }
    int q; cin >> q;
    while(q--) {
    	int x, l, r; cin >> x >> l >> r;
    	if(x == 2) {
    		cout << b[r] - b[l-1] << "\n";
    	}
    	else{
    		cout << a[r] - a[l-1] << "\n";
    	}
    }
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