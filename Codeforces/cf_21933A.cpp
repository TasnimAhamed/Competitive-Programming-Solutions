#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, s, x; cin >> n >> s >> x;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	sum += x;
    } 

    if (s < sum) {
    	cout << "NO\n";
    }
    else if (sum == s) {
    	cout << "YES\n";
    }
    else {
    	if ((s - sum) % x == 0) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
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