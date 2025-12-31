#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int l, r; cin >> l >> r;

    if (r < 2 * l) {
    	cout << "-1 -1\n";
    }
    else{
    	cout << l << " " << 2 * l << "\n";
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