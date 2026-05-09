#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
    string s; cin >> s;

    for (int i = 1; i <= n; i++) {
    	if (n % i == 0) {
    		reverse(s.begin(), s.begin() + i);
    	}
    }
    cout << s << "\n";
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