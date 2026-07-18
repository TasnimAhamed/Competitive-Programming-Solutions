#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s; cin >> s;
	for (auto &ch : s) {
		if (ch == 'w') {
			continue;
		}
		else if (ch == 'p') {
			ch = 'q';
		}
		else {
			ch = 'p';
		}
	}
	reverse(s.begin(), s.end());
	cout << s << "\n";
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