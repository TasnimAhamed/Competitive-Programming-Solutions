#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
 	int cnt = 0;
 	for (int i = 1; i < n; i++) {
 		if(v[i] < v[i - 1]) {
 			++cnt;
 		}
 	}
 	// cout << "CNT: " << cnt << "\n";
 	if(cnt == 0) {
 		cout << "YES\n";
 	}
 	else if(cnt == 1 and v[n-1] <= v[0]) {
 		cout << "YES\n";
 	}
 	else{
 		cout << "NO\n";
 	}
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