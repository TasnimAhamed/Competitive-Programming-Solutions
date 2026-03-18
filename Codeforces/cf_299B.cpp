#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    vector<int> free;
    for (int i = 0; i < n; i++) {
    	if (s[i] == '.') {
    		free.push_back(i);
    	}
    }

    for (int i = 1; i < free.size(); i++) {
    	if ((free[i] - free[i - 1]) > k) {
    		cout << "NO\n";
    		return;
    	}
    }

    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}