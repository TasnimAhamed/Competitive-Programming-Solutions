#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int k;
    while (cin >> k and k) {
    	string s; cin >> s;
    	int n = s.size();
    	k = n / k;
    	string ans, tmp;
    	int cnt = 0;
    	for (int i = 0; i < n; i++) {
    		++cnt;
    		tmp += s[i];
    		if (cnt == k) {
    			reverse(tmp.begin(), tmp.end());
				ans += tmp;
				tmp = ""; 
    			cnt = 0;
    		}
    	}
    	cout << ans << "\n";
    }
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