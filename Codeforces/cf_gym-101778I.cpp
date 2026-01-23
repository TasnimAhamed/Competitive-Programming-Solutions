#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int a, b, c, d; cin >> a >> b >> c >> d;

	if ((a + c) > (b + d)) {
		cout << 1 << "\n";
	}
	else if ((b + d) > (a + c)) {
		cout << 2 << "\n";
	}
	else {
		if (b == c) {
			cout << -1 << "\n";
		}	
		else if (c > b) {
			cout << 1 << "\n";
		}
		else {
			cout << 2 << "\n";
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