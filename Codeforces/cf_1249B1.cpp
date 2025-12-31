#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    vector<int> mp(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    	mp[i] = v[i];
    }

    for (int i = 1; i <= n; i++){
    	int pos = v[i];
    	int ans = 1;
    	while(pos != i) {
    		++ans;
    		pos = mp[pos];
    	}
    	cout << ans << " ";
    }
    cout << "\n";
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