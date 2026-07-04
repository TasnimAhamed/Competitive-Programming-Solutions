#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    int mn = *min_element(v.begin(), v.end());
    ll sum = 0;
    for(auto x : v){
        sum += (x - mn);
    }

    cout << sum << "\n";
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