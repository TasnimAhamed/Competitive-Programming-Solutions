#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) {
        cin >> x;
    }
    int mx = 0, cnt = 0;
    for(auto x : v){
        if(x == 0) ++cnt;
        else mx = max(cnt, mx), cnt = 0;
    }
    mx = max(mx, cnt);

    cout << mx << "\n";
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