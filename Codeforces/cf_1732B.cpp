#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int ans = 0;
    for (int i = 1; i < n; i++) {
    	if (ans or s[i] == '0' and s[i - 1] == '1') {
    		if (s[i] == '0' and ans % 2 == 0) {
    			++ans;
    		}
    		if (s[i] == '1' and ans & 1) {
    			++ans;
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