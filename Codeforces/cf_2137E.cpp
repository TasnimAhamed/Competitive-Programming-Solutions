#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());

    int time = 3;
	if(k%2 == 0) ++time;
	time = min(k, time);
	for (int i = 1; i <= time; i++) {
		int mn = 0;
		map<int, int> mp;
		for (int i = 0; i < n; i++) {
			mp[v[i]]++;
			if(v[i] == mn) {
				mn++;
			}
		}
		// cout << mn << "\n";
		for (int i = 0; i < n; i++) {
			if(mp[v[i]] > 1 or v[i] > mn) {
				v[i] = mn;
			}
		}
		--k;
	}
	ll sum = accumulate(v.begin(), v.end(), 0LL);
	cout << sum << "\n";
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