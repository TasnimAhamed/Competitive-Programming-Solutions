#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b, n; cin >> a >> b >> n;
    for (int i = 0; i < 10; i++) {
    	int tmp = a * 10 + i;
    	if(tmp % b == 0) {
    		cout << tmp;
    		for (int j = 0; j < n - 1; j++) {
    			cout << "0";
    		}
    		cout << "\n";
    		return;
    	}
    }
    cout <<  "-1\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}