#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m; cin >> n >> m;
    vector<pair<ll, ll>> v;
    for (int i = 0; i < n; i++) {
    	ll t, d; cin >> t >> d;
    	v.push_back({t, d});
    }
    ll curr_time = 0, curr_position = 0, ans = 0;
    for (int i = 0; i < n; i++) {
    	
    	int time_gap = v[i].first - curr_time;

    	if((curr_position ^ v[i].second) != time_gap % 2) {
    		time_gap -= 1;
    	}
    	ans += time_gap;
    	curr_time = v[i].first;
    	curr_position = v[i].second;
    }	
    cout << ans + (m - v[n - 1].first) << "\n";
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