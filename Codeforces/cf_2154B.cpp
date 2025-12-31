#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> a(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> a[i];
    }

    ll cost = 0;
    ll prev_mx = a[1];
    for (int i = 2; i <= n; i++) {
    	prev_mx = max(prev_mx, a[i]);
    	if(i % 2 == 0) {
    		a[i] = prev_mx;
    	}
    }
    for (auto x : a) {
    	cout << x << " ";
    }
    cout << "\n";
    for (int i = 1; i <= n; i+=2) {
    	  if(i > 1 and (a[i] <= a[i - 1])) {
    		ll need = (a[i - 1] - a[i] + 1);
    		cost += need;
    		a[i] -= need;
    	}
    	if(i < n and a[i] >= a[i + 1]) {
    		ll need = (a[i] - a[i + 1] + 1);
    		cost += need;
    		a[i] -= need;
    	}
    }

    cout << cost << "\n";

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