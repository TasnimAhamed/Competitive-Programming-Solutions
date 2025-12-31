#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    sort(v.begin(), v.end());

    int mx = -1;
    for (int i = 0; i < n; i += 2) {
    	int val = abs(v[i] - v[i + 1]);
    	mx = max(mx, val);
    }

    cout << mx << "\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}