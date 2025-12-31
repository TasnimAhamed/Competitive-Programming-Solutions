#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, k; cin >> n >> k;
	vector<int> v(n), tmp(n);
	for(auto  &x : v) {
		cin >> x;
	}
	int ans = 0;
	for (int i = 0; i < n; i++) {
		sort(v.begin(), v.end());
		tmp = v;
		v.clear();
		int paisi = 0;
		for(int j = tmp.size() - 1; j >= 0; j--) {
			if(tmp[j] > k) {
				++ans;
			}
			else{
				if(!paisi){
					paisi = 1;
				}
				else{
					v.push_back(2 * tmp[j]);
				}
			}
		}
		if(v.size() == 0) {
			break;
		}
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