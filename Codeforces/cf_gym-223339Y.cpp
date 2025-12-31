#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int s, e, ans = 0;

void count_step(int ss) {
	if (ss > e) {
		return;
	}
	if(ss == e) {
		++ans;
		return;
	}

	count_step(ss + 1);
	count_step(ss + 2);
	count_step(ss + 3);
}

void solve() {
    cin >> s >> e;
    count_step(s);
    cout << ans << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}