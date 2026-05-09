#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    if (n == 1 or n == 3) {
    	cout << -1 << "\n";
    	return;
    } 
    if (n == 2) {
    	cout << "66\n";
    	return;
    }
    string ans4 = "66", ans5 = "36366";
    if (n % 2 == 0) {
    	for (int i = 0; i < n - 2; i++) {
    		cout << "3";
    	}
    	cout << ans4 << "\n";
    }
    else {
    	for (int i = 0; i < n - 5; i++) {
    		cout << "3";
    	}
    	cout << ans5 << "\n";
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