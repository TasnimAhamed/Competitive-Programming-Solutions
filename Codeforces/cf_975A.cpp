#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    set<string> ans;
    for (int i = 0; i < n; i++) {
    	string s; cin >> s;
    	int cnt[26] = {0};
    	for (auto ch : s) {
    		cnt[ch - 'a']++;
    	}
    	string str = "";
    	for (int i = 0; i < 26; i++) {
    		if (cnt[i]) {
    			str += ('a' + i);
    		}
    	}
    	ans.insert(str);
    }
    cout << ans.size() << "\n";
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