#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;

    vector<int> v(n);
    for (auto& x : v) {
        cin >> x;
    }
    sort(v.begin(), v.end());
    
    int ans = 0;
    int l = 0, r = n - 1;
   
    while (l < r) {
        if (v[l] != v[r]) {
            ans++;
            l++;
            r--;
        } 
        else {
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