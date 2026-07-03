#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    if (n <= 2) {
    	cout << "No\n";
    	return;
    }

    cout << "Yes\n";
    cout << n / 2 << " ";
    for (int i = 2; i <= n; i += 2) {
    	cout << i << " ";
    }
    cout << "\n";
    cout << n / 2 + (n & 1 ? 1 : 0) << " ";
    for (int i = 1; i <= n; i += 2) {
    	cout << i << " ";
    }
    cout << "\n";

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