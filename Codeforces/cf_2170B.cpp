#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
  
    ll sum = 0;
    
    for (auto x : v) {
    	sum += x;
    }
    ll ans = sum - (n - 1);
    if(ans > n) ans = n;
    if(ans < 1) ans = 1;

    cout << ans << "\n";


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