#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
   	string tmp = "aeiou";
   	int cnt = n / 5;

	string ans = "";
	for (int i = 0; i < cnt; i++) {
	    ans += tmp;
	}
	if (n % 5) {
		ans += tmp.substr(0, n % 5);
	}
	sort(ans.begin(), ans.end());
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