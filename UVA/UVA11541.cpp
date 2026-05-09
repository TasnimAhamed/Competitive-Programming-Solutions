#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tt = 0;
void solve() {
    string s; cin >> s;
    string ans = "";
    int i = 0;
    while (i < s.size()) {
    	char ch = s[i];
    	++i;
    	int rep = 0;
    	while (isdigit(s[i])) {
    		rep = rep * 10 + (s[i] - '0');
    		i++;
    	}

    	if (rep) {
    		ans += (string(rep, ch));
    	}
    }
    cout << "Case " << ++tt << ": "; 
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