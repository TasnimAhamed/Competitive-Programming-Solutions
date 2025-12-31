#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }
    int l = -1, r = -1;
    for (int i = 1; i <= n; i++) {
    	if(v[i] == n) {
    		l = r = i;
    		break;
    	}
    }

    int curr = n, idx = n;
    // cout << "Ok: " <<  l << " " << r << "\n";
    while(--idx) {
    	if(l > 1 and v[l - 1] == curr - 1) {
    		--l;
    		--curr;
    	}
    	else if(r < n and v[r + 1] == curr - 1) {
    		++r;
    		--curr;
    	}
    	else{
    		cout << "NO\n";
    		return;
    	}
    	// cout << l << " " << r << "\n";
    	// cout << curr << "\n";
    }
    // cout << l << " " << r << "\n";
    cout << "YES\n";

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