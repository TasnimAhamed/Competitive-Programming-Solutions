#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int zero = 0, one = 0, pos = 0;
    for (auto &x : v) {
    	cin >> x;
    	if (x == 1) {
    		one++;
    	} 
    	if (x == 0) {
    		zero++;
    	}
    	else {
    		++pos;
    	}
    }
    if (zero == n or pos == n or (pos == 1 and zero > 1 and !one)) {
    	cout << "NO\n";
    }
    else if (pos > 1 and zero > 1 and !one) {
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