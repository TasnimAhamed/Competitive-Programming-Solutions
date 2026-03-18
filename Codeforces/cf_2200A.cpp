#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    ll mx = *max_element(v.begin(), v.end());

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(v[i] == mx)
            cnt++;
    }

    cout << cnt << endl;

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