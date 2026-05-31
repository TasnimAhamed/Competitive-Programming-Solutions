#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    for (auto&x : b) {
    	cin >> x;
    }
    
    for (int i = 0; i < n; ++i)
    {
    	if (a[i] > b[i]) {
    		swap(a[i], b[i]);
    	}
    }

    int mx = *max_element(a.begin(), a.end());
    ll sum = accumulate(b.begin(), b.end(), 0LL);

    cout << sum + mx << "\n";
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