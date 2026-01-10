#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> v(n);
    int total = 0;
    for (auto &x : v) {
    	cin >> x;
    	total += x;
    }
    for (auto x : v) {
    	int tmp = total - x;
    	if(tmp == m) {
    		cout << "Yes\n";
    		return;
    	}
    }
    cout << "No\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}