#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int l, a, b; cin >> l >> a >> b;
	int ans = a;
	for (int i = 0; i  <= l; i++) {
		int new_val = (a % l + (i * b) % l) % l;
		ans = max(new_val, ans); 
	}
	cout << ans << "\n";
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