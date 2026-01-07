#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, k; cin >> n >> k;
    vector<int> cnt(n + 2, 0);
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }
    int mov = n - k + 1;
    for (int i = n; i >= 0; i--) {
        if(mov == 0) {
            break;
        }
        if(cnt[i] > 1) {
            int mv = min(cnt[i] - 1, mov);
            mov -= mv;
            cnt[i] -= mv;
        }
    }
    if(mov > 0) {
        for (int i = n; i >= 0; i--) {
            if(mov == 0) {
                break;
            }
            if(cnt[i]) {
                cnt[i]--;
                mov--;
            }
        }
    }
    for(int i = 0; i <= n; i++) {
        if(!cnt[i]) {
            cout << i << "\n";
            return;
        }
    }
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