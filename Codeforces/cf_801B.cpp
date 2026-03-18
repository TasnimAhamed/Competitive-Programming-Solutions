#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
  	string x, y; cin >> x >> y;
  	string ans = "";
  	for (int i = 0; i < x.size(); i++) {
	  	if (x[i] < y[i]) {
	  		cout << -1 << "\n";
	  		return;
	  	}
	  	if (x[i] == y[i]) {
	  		ans += x[i];
	  	}
	  	else {
	  		ans += y[i];
	  	}
	 }

	  cout << ans << "\n";
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