#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void print_even_idx(int n, vector<int> &v) {
	if (n == 0){
		cout << v[n] << "\n";
		return;
	}
	cout << v[n] << " ";
	print_even_idx(n-2, v);
}

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for (auto &x : v) {
    	cin >> x;
    }
    --n;
    if(n&1) --n;
    print_even_idx(n, v);
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