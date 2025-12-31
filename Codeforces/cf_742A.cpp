#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
	
	if (n == 0) {
		cout << 1 << "\n";
	}
	else if (n % 4 == 1) {
		cout << 8 << "\n";
	}
	else if(n % 4 == 2) {
		cout << 4 << "\n";
	}
	else if(n % 4 == 3) {
		cout << 2 << "\n";
	}
	else{
		cout << 6 << "\n";
	}

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