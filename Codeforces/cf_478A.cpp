#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int sum = 0;
	for (int  i = 0; i < 5; i++) {
		int x; cin >> x;
		sum += x;
	}

	if (sum % 5) {
		cout << -1 << '\n';
	}
	else {
		if (sum / 5 == 0) {
			cout << -1 << '\n';
		}
		else {
			cout << sum / 5 << "\n";
		}
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