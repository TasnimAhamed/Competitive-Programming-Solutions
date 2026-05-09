#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    if (n & 1) {
    	int left = 3;
    	int right = n - 3 - 1;
    	int gcd = __gcd(left, right);

    	while (gcd != 1) {
    		left += 2;
    		right -= 2;
    		gcd = __gcd(left, right);
    	}
    		    	
    	cout << left << " " << right << " " << 1 << "\n";
    }
    else {
    	cout << 2 << " " << (n - 3) << " " << 1 << "\n";
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