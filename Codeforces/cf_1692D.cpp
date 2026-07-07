#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int h, m;
    char ch;
    cin >> h >> ch >> m;
    int x; cin >> x;

    int t = h * 60 + m, tmp = t;
    int cnt = 1500, ans = 0;;
    while (cnt--) {

        string hh = to_string(t / 60);
        string mm = to_string(t % 60);
        if (hh.size() == 1) {
            hh =  "0" + hh;
        }
        if (mm.size() == 1) {
            mm =  "0" + mm;
        }
        string time = hh + mm, cp = hh + mm;
        // cout << time << "\n";
        reverse(cp.begin(), cp.end());
        if (time == cp) {
            ++ans;
        }

        t += x;        
        t %= 1440;

        if (t == tmp) {
            break;
        }
    }

    cout << ans << "\n";
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