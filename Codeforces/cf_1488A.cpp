#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x, y; cin >> x >> y;
    if (x > y) {
    	cout << y << "\n";
    }
    else {
    	int pw = log10(y / x);
		int val = 1;
		for (int i = 0; i < pw; i++) {
			val *= 10;
		}
		int ans = 0;
		while(val > 1) {
			ans += (y / (x * val));
			y %= (x * val);
			val /= 10;
		}

		ans += (y / x + y % x);

		cout << ans << "\n";
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