#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int x, n, m; cin >> x >> n >> m;
	while (n > 0) {
		if ((x / 2 + 10) <= x) {
			x /= 2;
			x += 10;
			--n;
		}
		else {
			break;
		}
	}

	if (x <= (m * 10)) {
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