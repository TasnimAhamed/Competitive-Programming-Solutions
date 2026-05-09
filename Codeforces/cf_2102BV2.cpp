#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int cnt = 0;
    vector<int> v(n);
    for (int i = 0; i < n; i++){
    	cin >> v[i];
    	v[i] = abs(v[i]);
    	if (v[i] < v[0]) {
    		++cnt;
    	}
    }

    // cout << cnt << "\n";

    if (cnt > (n / 2)) {
    	cout << "NO\n";
    }
    else {
    	cout << "YES\n";
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