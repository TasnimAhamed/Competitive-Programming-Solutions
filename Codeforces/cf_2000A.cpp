#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int sz = s.size();

    if (sz < 3 or s[0] != '1' or (s[0] == '1' and s[1] != '0')) {
    	cout << "NO\n";
    }
    else {
    	if (s[2] == '0' or (s[2] == '1' and sz == 3)) {
    		cout << "NO\n";
    	}
    	else {
    		cout << "YES\n";
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