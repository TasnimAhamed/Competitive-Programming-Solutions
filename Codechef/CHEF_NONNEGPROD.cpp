#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);

    for (auto &x : v) {
    	cin >> x;
    }
    int zero = 0, neg = 0;
    for (auto x : v) {
    	if (x < 0) {
    		neg++;
    	}
    	if (x == 0) {
    		zero++;
    	}
    }
    if(zero){
    	cout << 0 << '\n';
    }
    else{
    	cout << (neg%2) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}