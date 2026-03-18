#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
	string s; cin >> s;

	auto isOK = [&] (string &s) {
		if (s.empty()) {
			return 0;
		}
	    int cnt = 1;
	    for (int i = 1; i < s.size(); ++i) {
	        if (s[i] != s[i - 1]) {
	            cnt++;
	        }
	    }
	    return cnt;
	};

	int ans = 0;
	for (int i = 0; i < n; i++) {
	    string str = s.substr(i) + s.substr(0, i);
		ans = max(ans, isOK(str));
	}


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