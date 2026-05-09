#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string a, b; cin >> a >> b;
    int total = a.size() + b.size();

    int st = a.size() - 1, en = b.size() - 1;
    int cnt = 0;
    while (st >= 0 and en >= 0) {
        if (a[st] == b[en]) {
            ++cnt;
            --st;
            --en;
        }
        else {
            break;
        }
    }

    cout << total - 2 * cnt << "\n";
   
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}