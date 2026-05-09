#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int b = 0, ans = 0;
    for (int i = n - 1; i >= 0; i--) {
    	if (s[i] == 'B') {
    		++b;
    	}
    	else {
    		ans += b;
    		if (b) {
    			b = 1;
    		}
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