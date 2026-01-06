#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int total = 0;
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	total += x;
    }
    if(total % n == 0) {
    	cout << n << "\n";
    }
    else {
    	cout << n - 1 << "\n";
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