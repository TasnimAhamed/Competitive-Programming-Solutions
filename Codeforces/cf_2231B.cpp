#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    int mx = 0;
    for (int i = 2; i <= n; i++) {
    	if (v[i] < v[i - 1]) {
    		mx = max(mx, v[i - 1] - v[i]);
    	}
    }

   	for (int i = 2; i <= n; i++) {
    	if (v[i] < v[i - 1]) {
    		v[i] += mx;
    	}
    }

    for (int i = 2; i <= n; i++) {
    	if (v[i] < v[i - 1]) {
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";     

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