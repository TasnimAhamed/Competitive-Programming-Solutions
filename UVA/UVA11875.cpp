#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tt = 0;

void solve() {
	++tt;

    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
    	cin >> v[i];
    }

    cout << "Case " << tt << ": " << v[n/2] << "\n";
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