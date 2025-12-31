#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> odd;
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
    	int x; cin >> x;
    	if(x&1) {
    		odd.push_back(x);
    	}
    	else{
    		ans+= x;
    	}
    }

    if(odd.size()) {
    	sort(odd.rbegin(), odd.rend());
    	int sz = (odd.size() + 1) / 2;
    	for (int i = 0; i < sz; i++) {
    		ans += odd[i];
    	}
    	cout << ans << "\n";
    }
    else{
    	cout << 0 << "\n";
    }
    

 	
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