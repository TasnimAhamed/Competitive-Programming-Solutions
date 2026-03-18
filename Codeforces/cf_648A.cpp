#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<string> mountains(n);
    for (auto &mountain : mountains) {
    	cin >> mountain;
    }

    vector<int> pick;
    for (int col = 0; col < m; col++) {
    	int cnt = 0;
    	for (int row = n - 1; row >= 0; row--) {
    		if (mountains[row][col] == '*') {
    			++cnt;
    		}
    	}
    	pick.push_back(cnt);
    }
    int mx_ascent = 0, mx_descent = 0;
    for (int i = 0; i < m; i++) {
    	if (i and pick[i] >= pick[i - 1]) {
    		mx_ascent = max(mx_ascent, pick[i] - pick[ i - 1]);
    	}
    	if (i and pick[i] <= pick[i - 1]) {
    		mx_descent = max(mx_descent, pick[i - 1] - pick[i]);
    	}
    }

    cout << mx_ascent << " " << mx_descent << "\n";
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