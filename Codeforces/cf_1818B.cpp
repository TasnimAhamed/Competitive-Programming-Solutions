#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    if (n == 1) {
    	cout << n << "\n";
    	return;
    }
    
    int total = (n * (n + 1)) / 2;

    if (total % n == 0 and n != 1){
    	cout << -1 << "\n";
    }
    else {
    	for (int i = 1; i <= n; i += 2) {
    		cout << i + 1 << " " << i << " ";
    	}
    	cout << "\n";
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