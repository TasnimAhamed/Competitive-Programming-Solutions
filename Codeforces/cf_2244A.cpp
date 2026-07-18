#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int mx = 0, cnt = 0;
    for (auto ch : s) {
    	if (ch == '#') {
    		++cnt;
    		mx = max(mx, cnt);
    	}
    	else {
    		cnt = 0;
    	}
    }

    cout << (mx + 1) / 2 << "\n";
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