#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(2 * n);
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    }
    for (int i = n; i < 2 * n; i++){
    	v[i] = v[i % n];
    }
    int mx = 0, cnt = 0;
    for (int i = 0; i < 2 * n; i++) {
    	if (v[i] == 1) {
    		++cnt;
    	}
    	else {
    		mx = max(mx, cnt);
    		cnt = 0;
    	}
    }
    mx = max(mx, cnt);

    cout << mx << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}