#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) {
    	cin >> x;
    }
   
    vector<ll> b(n);
    for (auto&x : b) {
    	cin >> x;
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        ll need;
        
        if (i == 0) {
            need = __gcd(a[0], a[1]);
        } 
        else if (i == n - 1) {
            need = __gcd(a[n - 2], a[n - 1]);
        } 
        else {
            ll left_gcd = __gcd(a[i - 1], a[i]);
            ll right_gcd = __gcd(a[i], a[i + 1]);
            need = (left_gcd * right_gcd) / __gcd(left_gcd, right_gcd);\
        }
        cerr << need << "\n";

        if (need < a[i]) {
            cnt++;
        }
    }
    cout << cnt << "\n";
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