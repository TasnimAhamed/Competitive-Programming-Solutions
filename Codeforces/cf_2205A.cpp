#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	int idx = max_element(v.begin(), v.end()) - v.begin();
	swap(v[0], v[idx]);

	for (auto x : v) {
		cout << x << " ";
	}
	cout << "\n";
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}