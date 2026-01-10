#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	int n; cin >> n;
	vector<int> v(n);
	for (auto &x : v) {
		cin >> x;
	}
	int x; cin >> x;
	for (auto a : v) {
		if( a == x) {
			cout << "Yes\n";
			return;
		}
	}

	cout << "No\n";
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}