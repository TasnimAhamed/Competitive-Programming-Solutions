#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string a, b, c; cin >> a >> b >> c;
    int paisi = 0;
    for (int i = 0; i < n; i++) {
    	if (a[i] != c[i] and b[i] != c[i]) {
    		paisi = 1;
    		break;
    	}
    }

   cout << (paisi ? "YES\n" : "NO\n");
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