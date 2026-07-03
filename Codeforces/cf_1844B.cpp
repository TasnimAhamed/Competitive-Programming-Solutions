#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    if (n == 1) {
    	cout << 1 << "\n";
    }
    else if (n == 2) {
    	cout  << "2 1" << "\n";
    }
    else {
    	vector<int> per(n, 0);
    	per[0] = 2;
    	per[n - 1] = 3;
    	per[n / 2] = 1;
    	int cnt = 4;
    	for (int i = 0; i < n; i++) {
    		if (!per[i]) {
    			per[i] = cnt++;
    		}
    	}

    	for (auto x : per) {
    		cout << x << " ";
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