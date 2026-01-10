#include<bits/stdc++.h>
using namespace std;
using ll = long long;

const int N = 1e7 + 5;
int arr[N];

void solve() {
    int n; cin >> n;

    for (int i = 1; i <= n; i++) {
    	for (int j = i; j <= n; j += i) {
    		arr[j]++;
    	}
    }
    ll ans = 0;
    for (int i = 1; i <= n; i++) {
    	ans += (1LL * arr[i] * i);
    }
    cout << ans << '\n';

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}