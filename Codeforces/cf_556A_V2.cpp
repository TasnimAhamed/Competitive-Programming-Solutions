#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int one = 0, zero = 0;

    for (auto ch : s) {
    	if (ch == '1') {
    		++one;
    	}
    	else {
    		++zero;
    	}
    }

    cout << abs(one - zero) << "\n";
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