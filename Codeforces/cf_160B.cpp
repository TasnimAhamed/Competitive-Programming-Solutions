#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
	string ff, ss;
	for (int i = 0; i < n; i++) {
		ff += s[i];
	}
	for (int i = n; i < s.size(); i++){
		ss += s[i];
	}
	sort(ff.begin(), ff.end());
	sort(ss.begin(), ss.end());
	int cnt1 = 0, cnt2 = 0;

	for (int i = 0; i < n; i++) {
		if(ff[i] > ss[i]) {
			++cnt1;
		}
		if(ff[i] < ss[i]) {
			++cnt2;
		}
	}
	if(cnt1 == n or cnt2 == n) {
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
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}