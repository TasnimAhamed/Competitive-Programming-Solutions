#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    vector<bool> check(n + 1, false);
    for (int i = 1; i < n; i++) {
    	if(v[i] != v[i - 1]) {
    		check[i] = true;
    		check[i - 1] = true;
    	}
    }

    int ans = count(check.begin(), check.end(), true);
    cout << ans << "\n";
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