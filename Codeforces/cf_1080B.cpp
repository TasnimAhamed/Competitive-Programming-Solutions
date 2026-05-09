#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int l, r; cin >> l >> r;
    int total_odd_cnt = (r + 1) / 2, total_even_cnt = r / 2;
    ll total_odd_sum = -1LL * total_odd_cnt * total_odd_cnt;
    ll total_even_sum = 1LL * total_even_cnt * (total_even_cnt + 1);
    ll total_sum = total_odd_sum + total_even_sum;
    --l;
    int rem_odd_cnt = (l + 1) / 2, rem_even_cnt = l / 2;
    ll rem_odd_sum = -1LL * rem_odd_cnt * rem_odd_cnt;
    ll rem_even_sum = 1LL * rem_even_cnt * (rem_even_cnt + 1);
    ll rem_sum = rem_odd_sum + rem_even_sum;

    cout << total_sum - rem_sum << "\n";


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