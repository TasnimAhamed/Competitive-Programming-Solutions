#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s; cin >> s;
	int one = 0, zero = 0;
	for (auto ch : s) {
		if(ch == '1') {
			one++;
		}
		else{
			zero++;
		}
	}
	int mn = min(one, zero);

	if(mn&1) {
		cout << "DA\n";
	}
	else {
		cout << "NET\n";
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