#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	vector<string> s(n);
	for(auto &x : s) {
		cin >> x;
	}
	string ans = "";
	for (int i = 0; i < n; i++) {
		ans = min(ans + s[i], s[i] + ans);
	}
	cout << ans << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}