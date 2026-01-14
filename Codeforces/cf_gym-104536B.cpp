#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {

    int n; cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int x; cin >> x;
            sum += x;
        }
    }
    double res = (double) sum / (n * n);
    cout << fixed << setprecision(6) << res << "\n";


}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}