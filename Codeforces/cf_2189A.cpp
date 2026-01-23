#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, h, l;
    cin >> n >> h >> l;

    int ff = 0, ss = 0, comm = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= h) {
            ++ff;
        } 
  		if (x <= l) {
            ++ss;
        }
        if(x <= h or x <= l) {
        	++comm;
        }
    }

    int res = min({ff, ss, comm / 2});
    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}