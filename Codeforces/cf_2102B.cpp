#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<array<int, 2>> v;
    
    for (int i  = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back({abs(x), i});
    }
    sort(v.begin(), v.end());

    vector<int> ans(n , 0);
    for (int i = 0; i < n / 2 + 1; i++) {
        auto [val, idx] = v[i];
        ans[idx] = 1;
    }

    if (ans[0]) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
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
