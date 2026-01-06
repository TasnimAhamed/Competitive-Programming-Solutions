#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 998244353;

void solve(){

	int n; cin >> n;
	vector<int> v(n);

	for(auto &x : v) cin >> x;

	sort(v.begin(), v.end());
	ll ans = 1;
	for(int i = 0; i < n; i++){
		ans = (ans % MOD * (v[i] - i) % MOD) % MOD;
	}

	cout << ans << "\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}