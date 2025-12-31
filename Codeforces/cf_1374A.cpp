#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x, y, n; cin >> x >> y >> n;
    int div = n/x;
    int rem = n%x;

    if ((div * x + y) > n) {
    	--div;
    }

    cout << (div * x + y) << "\n";
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