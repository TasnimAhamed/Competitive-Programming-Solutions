#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> a(n), b(n), diff(n);
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }

    for (int i = 0; i < n; i++)
    {
    	diff[i] = b[i] - a[i];
    }

    // for (auto x : diff) {
    // 	cout << x << " ";
    // }
    // cout << "\n";

    int curr = 0;
    for (int i = 0; i < n; i++)
    {
    	curr += diff[i];
    	// cout << curr << "\n";
    	if (curr < 0) {
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
