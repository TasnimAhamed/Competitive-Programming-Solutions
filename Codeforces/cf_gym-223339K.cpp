#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void print_max(int n, vector<int> &v) {
	if(n == 0){
		cout << v[0] << "\n";
		return;
	}
	v[0] = max(v[0], v[n]);
	print_max(n-1, v);
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for (auto &x : v) {
    	cin >> x;
    }
    print_max(n-1, v);
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