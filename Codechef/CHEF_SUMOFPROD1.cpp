#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; 
    cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    ll ans = 0, cnt = 0;
    for (auto x : v){
    	if (x == 1) {
    		++cnt;
    	}
    	else{
    		ans += (cnt * (cnt + 1)/2);
    		cnt = 0;
    	}
    }
    ans += (cnt * (cnt + 1)/2);

    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}