#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x; cin >> x;
    for (int i = 1; i <= 6; i++) {
    	for (int j = 1; j <= 6; j++) {
    		for (int k = 1; k <= 6; k++) {
    			if ((i + j + k) == x) {
    				cout << "Yes\n";
    				return;
    			}
    		}
    	}
    }
    cout << "No\n";
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