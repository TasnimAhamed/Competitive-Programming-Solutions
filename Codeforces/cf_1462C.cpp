#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;

	vector<int> digits;
	for (int d = 9; d >= 1; d--) {
	    if (n >= d) {
	        digits.push_back(d);
	        n -= d;
	    }
	}

	if (n > 0) {
	    cout << -1 << "\n";
	    return;
	}

	sort(digits.begin(), digits.end());

	for (int d : digits) {
		cout << d;
	}
	cout << "\n";
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