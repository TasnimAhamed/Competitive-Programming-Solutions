#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	string s; cin >> s;
	int len = s.size() + 1;

	string ans = "";
	ans += "1";
	for (int i = 1; i <= len - 2; i++) {
		ans += "0";
	}
	ans += "1";
	cout << ans << "\n";
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