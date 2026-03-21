#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int n = s.size();
    int cnt = 0, ans = 0;
    if (s[0] == 'u') {
    	s[0] = 's';
    	++ans;
    }
    if (s[n - 1] == 'u') {
    	s[n - 1] = 's';
    	++ans;
    }
    for (int i = 0; i < n; i++) {
    	if (s[i] == 'u') {
    		++cnt;
    	}
    	else {
    		cnt = 0;
    	}

    	if (cnt == 2) {
    		s[i] = 's';
    		cnt = 0;
    		++ans;
    	}
    }
    cout << ans << "\n";
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