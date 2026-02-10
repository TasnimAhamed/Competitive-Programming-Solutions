#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, x; cin >> n >> x;
    int odd_cnt = 0, even_cnt = 0;
    for (int i = 0; i < n; i++) {
    	int a; cin >> a;
    	if (a & 1) {
    		++odd_cnt;
    	}
    	else {
    		++even_cnt;
    	}
    }

    if (odd_cnt == 0) {
    	cout << "NO\n";
    	return;
    }

    if (x & 1) {
    	if (odd_cnt >= x) {
    		cout << "YES\n";
    	}
    	else {
    		int odd_need = (odd_cnt & 1) ? odd_cnt : odd_cnt - 1;
    		int even_need = x - odd_need;

    		if (even_cnt >= even_need) {
    			cout << "YES\n";
    		}
    		else {
    			cout << "NO\n";
    		}

    	}
    }
    else {
    	int odd_need = (odd_cnt & 1) ? odd_cnt : odd_cnt - 1;
    	int even_need = max(1, x - odd_need);

    	if (even_cnt >= even_need) {
    		cout << "YES\n";
    	}
    	else {
    		cout << "NO\n";
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