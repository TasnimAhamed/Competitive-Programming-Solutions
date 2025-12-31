#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int l, r, k; cin >> l >> r >> k;
    if(l == r and l != 1) {
    	cout << "YES\n";
    	return;
    }
    int odd = (r - l) >> 1;
    if(l % 2 or r % 2) {
    	++odd;
    }
    if(k >= odd) {
    	cout << "YES\n";
    }
    else{
    	cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}