#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    int one = 0;
    ll sum = 0;
    for (auto &x : v) {
        cin >> x;
        sum += x;
        if (x == 1) {
            ++one;
        }
    }
    if (n == 1 or sum - one < n) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
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