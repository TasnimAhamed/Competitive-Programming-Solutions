#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int st = -1, en = -1; 
    for (int i = 0; i < n - 1; i++) {
    	if (v[i] == v[i + 1]) {
    		if (st == -1) {
    			st = i;
    		}
    		en = i + 1;
    	}
    }

    if (st == -1 and en == -1) {
    	cout << 0 << "\n";
    }
    else {
    	st++;
    	en--;
    	if (st > en) {
    		cout << 0 << "\n";
    	}
    	else if (st == en) {
    		cout << 1 << "\n";
    	}
    	else {
    		cout << (en - st) << "\n";
    	}
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