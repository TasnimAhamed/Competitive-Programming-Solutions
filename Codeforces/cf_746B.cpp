#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n; cin >> n;
	string s; cin >> s;
    string ans;
    for (auto ch : s) {
    	if (n & 1) {
    		ans += ch;
    	}
    	else {
    		ans = ch + ans;
    	}
    	--n;
    }
    cout << ans << "\n";

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}