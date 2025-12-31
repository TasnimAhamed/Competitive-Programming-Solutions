#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<ll> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    vector<ll> maxi(n), psum(n);
    maxi[0] = v[0];
    psum[0] = v[0];
    for(int i = 1; i < n; i++){
        maxi[i] = max(v[i], maxi[i-1]);
        psum[i] = v[i] + psum[i-1];
    }

    for(int i = 0; i < n; i++){
        if( i == (n-1)){
            cout << psum[n-1] << " ";
        }
        else{
            cout << (psum[n-1] - psum[n-1-i] + maxi[n-i-1]) << " ";
        }
    }

    cout << "\n";
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

