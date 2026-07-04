#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;

    int r = 0, b = 0, cnt =0;
    for (auto ch : s) {
        if (ch != 'W') {
            ++cnt;
            if (ch == 'R') {
                ++r;
            }       
            else {
                ++b;
            }     
        }
        else {
            if (cnt and (cnt == r or cnt == b)) {
                cout << "NO\n";
                return;
            }
            else {
                cnt = 0, r = 0, b = 0;
            }
        }
    }

    if (cnt and (cnt == r or cnt == b)) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

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