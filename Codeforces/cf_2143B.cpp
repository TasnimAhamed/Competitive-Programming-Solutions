#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
    	cin >> b[i];
    }
    sort(a.rbegin(), a.rend());
    sort(b.begin(), b.end());

    ll ans = 0;
    int i = 0, j = 0;
    while(i < n) {
    	if(j < m) {
    		ll new_sum = 0;    		
	    	int idx = 0, nw_b = b[j], cnt = 0;
	    	while(idx < nw_b and i < n) {
	    		new_sum += a[i];
	    		++i;
	    		++idx;
	    		++cnt;
	    	}
	    	if(cnt == nw_b) {
	    		ans += (new_sum - a[i - 1]);
	    	}
	    	else{
	    		ans += new_sum;
	    	}
    	}
    	else{
    		ans += a[i];
    		++i;
    	}
    	++j;
    }
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