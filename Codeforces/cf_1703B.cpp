#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	string s; cin >> s;

	int idx[26] = {0};
	int ans = 0;
	for (auto ch : s) {
		if (idx[ch - 'A']) {
			++ans;
		}
		else {
			idx[ch - 'A']++;
			ans += 2;
		}
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