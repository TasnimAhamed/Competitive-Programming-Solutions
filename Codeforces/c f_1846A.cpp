#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
    	int a, b; cin >> a >> b;
    	if ((a - b) > 0) {
    		++cnt;
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