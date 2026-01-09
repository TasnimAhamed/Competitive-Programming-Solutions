#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    if(k == 0) {
    	cout << 1 << "\n";
    }
    else if(k == 1) {
    	cout << n * 25 << "\n";
    }
    else{
    	int ans = 625LL * n * (n - 1) / 2 + n * 25;
    	cout << ans + 1 << "\n";
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