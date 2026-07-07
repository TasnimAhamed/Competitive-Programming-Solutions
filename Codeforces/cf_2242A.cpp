#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int two = 0, more = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	if (x > 2) {
    		++more;
    	}
    	else if (x == 2) {
    		++two;
    	}
    }

    if (more or two >= 2) {
    	cout << "YES\n";
    }
    else {
    	cout << "NO\n";
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