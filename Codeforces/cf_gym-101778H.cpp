#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m; cin >> n >> m;
	string s; cin >> s;

	int mismatch = 0;
	for (int i = 0; i < n / 2; i++) {
		if (s[i] != s[n- i - 1]) {
			++mismatch;
		}
	}

	int ans = 0;
	for (int i = 0; i < m; i++) {
		int idx;
		char ch;
		cin >> idx >> ch;
		--idx;
		char prev = s[idx];
		s[idx] = ch;
		if (idx != (n - idx - 1)) {

			if (prev == s[n - idx - 1] and s[idx] != s[n - idx - 1]) {
				++mismatch;
			}
			else if (prev != s[n - idx - 1] and s[idx] == s[n - idx - 1]) {
				--mismatch;
			}
		}

		if (!mismatch) {
			++ans;
		}
	}

	cout << ans << "\n";


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}