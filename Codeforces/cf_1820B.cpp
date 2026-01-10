#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	string s; cin >> s;
	int n = s.size();
	int zero = 0, one = 0;
	for (auto ch : s) {
		if(ch == '1') {
			++one;
		}
		else{
			++zero;
		}
	}
	if(one == 0) {
		cout << one << "\n";
	}
	else if(one == n) {
		cout << 1LL * n * n << "\n";
	}
	else{
		int mx = -1;
		int cnt = 0;
		for (auto ch : s) {
			if(ch == '1') {
				++cnt;
			}
			else{
				mx = max(mx, cnt);
				cnt  = 0;
			}
		}
		mx = max(mx, cnt);
		
		int left = 0;
		int right = 0;
		for (int i= 0; i < n; i++) {
			if(s[i] == '1') {
				++left;
			}
			else{
				break;
			}
		}
		for (int i = n - 1; i >= 0; i--) {
			if(s[i] == '1') {
				++right;
			}
			else{
				break;
			}
		}

		mx = max(mx, left + right);
		int mid = (mx + 1) / 2;
		int row = mx - mid + 1;
		ll ans = 1LL * mid * row;
		cout << ans << "\n";
	}
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
}