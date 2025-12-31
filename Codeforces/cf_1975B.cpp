#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<int> v(n);
	for (auto &x : v) {
		cin >> x;
	}    
	sort(v.begin(), v.end());
	int mn = v[0], mn2 = -1;
	for (int i = 0; i < n; i++) {
		if(v[i] % mn != 0){
			if(mn2 == -1) {
				mn2 = v[i];
			}
			if(v[i]%mn2 != 0) {
				cout << "No\n";
				return;
			}
		}
	}

	cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}