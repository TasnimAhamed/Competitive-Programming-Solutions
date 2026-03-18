#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    
    int sum = 0;
    vector<array<int, 2>> digit;
    for (int i = 0; i < s.size(); i++) {
    	sum += s[i] - '0';
    	digit.push_back({s[i] - '0', i});
    }
    sort(digit.rbegin(), digit.rend());

    int cnt = 0;
    int need = sum - 9;
	for (auto [d, idx] : digit) {
		if (need <= 0) {
			break;
		}
		int mx = (idx == 0) ? d - 1 : d;
		if (mx > 0) {
			need -= mx;
			++cnt;
		}
	}
    cout << cnt << "\n";
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