#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, c, d; cin >> a >> b >> c >> d;
    int cnt = 0;
    if (b > a) {
    	++cnt;
    }
    if (c > a) {
    	++cnt;
    }
    if (d > a) {
    	++cnt;
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