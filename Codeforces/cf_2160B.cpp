#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }
    vector<int> ans(n + 1);
    ans[1] = 1;
    int curr = 1;
    for (int i = 2; i <= n; i++) {
		ll need = v[i] - v[i - 1];
		// cout << need << "\n";
		if((i - need) == 0) {
			curr++;
			ans[i]= curr;
		}
		else{
			ans[i]= ans[i - need];
		}
    }

    for (int i = 1; i <= n; i++) {
    	cout << ans[i] << " ";
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