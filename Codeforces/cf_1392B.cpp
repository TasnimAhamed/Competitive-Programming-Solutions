#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    auto check = [&] () {
    	int mx = *max_element(v.begin(), v.end());

	    for (auto &x : v) {
	    	x = mx - x;
	    }
    };
    check();
    if (k % 2 == 0){
    	check();
    }
    for (auto& x : v) {
    	cout << x << " ";
    }
    cout << "\n";

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