#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    }
    int one = 0, extra = 0;
    for (auto x : v) {
    	if (x == 67) {
    		cout << "YES\n";
    		return;
    	}
    }

    cout << "NO\n";
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