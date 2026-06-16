#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x, y; cin >> n >> x >> y;
    string s; cin >> s;
    x = abs(x), y = abs(y);
    int a = 0, b = 0;
    for (auto ch : s) {
    	a += (ch == '4');
    	b += (ch == '8');
    }

    if ((a + 2 * b) < (x + y)) {
    	cout << "NO\n";
    }
    else if ((a + b) < max(x, y)) {
    	cout << "NO\n";
    }
    else {
    	cout << "YES\n";
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