#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);;
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];;
    }

    int cnt = 0;
    int nxt = 1 + v[1] - 1;
    nxt = min(nxt, n);

    for (int i = 1; i <= nxt; i++) {
        cnt++;

        nxt = max(nxt, i + v[i] - 1);
        if (nxt > n) {
        	nxt = n;
        }
    }
    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}