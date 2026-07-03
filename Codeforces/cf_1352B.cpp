#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    if (n < k) {
    	cout << "NO\n";
    	return;
    }

    int odd = n - (k - 1), even = n - (k - 1) * 2;
    if (odd & 1) {
    	cout << "YES\n";
    	vector<int> v(k, 1);
    	v[k - 1] = odd;
    	for (auto x : v) {
    		cout << x << " ";
    	}
    	cout << "\n";
    }
    else if (even % 2 == 0 and even > 0) {
    	cout << "YES\n";
    	vector<int> v(k, 2);
    	v[k - 1] = even;
    	for (auto x : v) {
    		cout << x << " ";
    	}
    	cout << "\n";
    }
    else {
    	cout << "NO\n";
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