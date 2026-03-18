#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
	cin >> n;

	string s;
	cin >> s;

	int zero_cnt = count(s.begin(), s.end(), '0');

	if (zero_cnt == n) {
		cout << "0\n";
		return;
	}

	vector<int> pos0, pos1;

	for (int i = 0; i < n; i++) {
	    if (s[i] == '1')
	        pos1.push_back(i + 1);
	    else
	        pos0.push_back(i + 1);
	}

	int one_sz = pos1.size();
	int zero_sz = pos0.size();

	if (zero_sz & 1) {
		cout << zero_sz << "\n";
		for (auto x : pos0) {
			cout << x << " ";
		}
		cout << "\n";
	}
	else if(one_sz % 2 == 0) {
		cout << one_sz << "\n";
		for (auto x : pos1) {
			cout << x << " ";
		}
		cout << "\n";
	}
	else {
		cout << -1 << "\n";
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