#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    int sum = 0;
    for (auto &x : v)
    {
		cin >> x;
    	sum += x;
    }

    sort(v.begin(), v.end());

    if (sum >= (4.5 * n)) {
    	cout << 0 << "\n";
    }
    else {
    	double need = 4.5 * n - sum;
    	int cost = 0, cnt = 0;
    	for (auto x : v) {
    		cost += (5 - x);
    		++cnt;
    		if (cost >= need) {
    			cout << cnt << "\n";
    			return;
    		}
    	}
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