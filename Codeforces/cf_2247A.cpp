#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int one = 0, neg = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x == 1) {
    		one++;
    	}
    	else {
    		neg++;
    	}
    }
    int diff = abs(one - neg);
    if (diff & 1 or ((diff / 2) & 1)) {
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