#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++) {
    	cin >> v[i];
    }

    sort(v.begin(), v.end());

    int ans = v[1];
    int mn = INT_MAX, paisi = 1;
    for (int i = 2; i <= n; i++) {	
    	int diff = v[i] - ans;
    	if (diff <= ans) {
    		paisi = 0;
    	}
    	mn = min(mn, diff);
    }
    
    if(paisi) {
    	cout << mn << "\n";
    }
    else{
    	cout << ans << "\n";
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