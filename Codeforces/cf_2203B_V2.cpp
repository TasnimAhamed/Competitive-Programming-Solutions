#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int sum = 0;
    vector<int> digit;
    for (int i = 0; i < s.size(); i++) {
    	sum += (int) (s[i] - '0');
    	if (i) {
    		digit.push_back(s[i] - '0');
    	}
    	else {
    		digit.push_back(s[i] - '0' - 1);
    	}
    }

    if (sum < 10) {
    	cout << 0 << '\n';
    	return;
    }

    sort(digit.rbegin(), digit.rend());

    for (int i = 0; i < digit.size(); i++) {
    	sum -= digit[i];

    	if (sum < 10) {
    		cout << i + 1 << '\n';
    		return;
    	}
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