#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m; cin >> n >> m;
	int mn = min(n, m);
	if (mn & 1 or n == 1 or m == 1) {
		cout << "Akshat\n";
	}
	else {
		cout << "Malvika\n";
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }
    return 0;
}