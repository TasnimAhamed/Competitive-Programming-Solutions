#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    string pi = "31415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679";
    int cnt = 0;
    for (int i = 0; i < min(30, (int)s.size()); i++) {
    	if (s[i] == pi[i]) {
    		++cnt;
    	}
    	else {
    		break;
    	}
    }

    cout << cnt << "\n";
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