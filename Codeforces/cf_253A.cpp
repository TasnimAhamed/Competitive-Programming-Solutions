#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

	// freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n, m; cin >> n >> m;

    string ans = "";
    if(n >= m) {
    	for(int i = 1; i <= m; i++) {
    		ans += "BG";
    	}
    	for (int i = 1; i <= n - m; i++){
    		ans += "B";
    	}
    }
    else{
    	for(int i = 1; i <= n; i++) {
    		ans += "GB";
    	}
    	for (int i = 1; i <= m - n; i++){
    		ans += "G";
    	}
    }
    cout << ans << "\n";
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