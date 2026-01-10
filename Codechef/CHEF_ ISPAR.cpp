#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k; cin >> n >> k;
    if(k == 1) {
    	cout << (n&1 ? "ODD" : "EVEN") << "\n";
    }
    else if(k == 2) {
    	cout << "ODD\n";
    }
    else{
    	cout << "EVEN\n";
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