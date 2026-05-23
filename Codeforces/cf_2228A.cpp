#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    int cnt0 = 0, cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;

        if (x == 0) {
        	cnt0++;
        }
        else if (x == 1) {
        	cnt1++;
        }
        else {
        	cnt2++;
        }
    }

    int ans = cnt0;
    int pr = min(cnt1, cnt2);
    ans += pr;

    cnt1 -= pr;
    cnt2 -= pr;

    ans += cnt1 / 3;
    ans += cnt2 / 3;

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