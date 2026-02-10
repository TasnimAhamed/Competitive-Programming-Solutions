#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }
    int mx = *max_element(v.begin(), v.end());
    vector<int> cnt(mx + 1, 0), ans(mx + 1, 0);
    sort(v.begin(), v.end());
    
    for (int i = 1; i <= mx; i++) {
    	int idx = lower_bound(v.begin(), v.end(), i) - v.begin();
    	cnt[i] = n - idx;
    }
    
    ll carry = 0;
    for (int i = 1; i <= mx; i++) {
      ll sum = cnt[i] + carry;
      ans[i] = sum % 10;
      carry = sum / 10;
    }

    if(carry) {
    	cout << carry ;
    }
    for (int i = mx; i >= 1; i--) {
    	cout << ans[i] ;
    }
    cout << "\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}