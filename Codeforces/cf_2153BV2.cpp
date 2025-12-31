#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int x, y, z; cin >> x >> y >> z;
    int a, b, c;
    a = b = c = 0;
    a |= x, b |= x;
    b |= y, c |= y;
    c |= z, a |= z;

    if((a & b) == x and (b & c) == y and (c & a) == z) {
    	cout << "YES\n";
    }
    else{
    	cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}