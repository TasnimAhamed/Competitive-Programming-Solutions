#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto& x : v) {
    	cin >>x;
    } 
    int cnt = 1;
    for (auto x : v) {
    	if (x == cnt) {
    		++cnt;
    	}
    }

    int need = n - cnt + 1;
    cerr << need << "\n";

    cout << (need + k - 1) / k << "\n";
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