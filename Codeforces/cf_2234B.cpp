#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n; cin >> n;
    
    if (n % 12 != 10) {
    	cout << n % 12 << " " << n - (n % 12) << "\n";
    }
    else {
    	if (n >= 22) {
    		cout << 22 << " " << n - 22 << "\n";
    	}
    	else {
    		cout << -1 << "\n";
    	}
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