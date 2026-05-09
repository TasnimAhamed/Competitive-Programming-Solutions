#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m, p, q; cin >> n >> m >> p >> q;
    
    if (n % p == 0 and (n / p) * q != m) {
        cout << "NO\n";
    }
    else {
        cout << "YES\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

