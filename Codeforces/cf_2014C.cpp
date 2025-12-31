#include<bits/stdc++.h>
using namespace std;
using ll = long long;


bool isOK(ll mid, vector<int> &v, ll sum, int n){

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(mid > (1LL * v[i] * 2 * n - sum)) ++cnt;
    }

    return (cnt >= (n/2 + 1));
}
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    for(auto &x : v) cin >> x;

    if(n < 3) {
        cout << -1 << "\n";
        return;
    }

    sort(v.begin(), v.end());

    ll sum = accumulate(v.begin(), v.end(), 0LL);

    ll lo = 0, hi = 1e12, ans = -1;
    while(lo <= hi){
//        cout << "lo - hi: " << lo << " " << hi << "\n";
        ll mid = lo + (hi - lo)/2;
//        cout << "mid: " << mid << "\n";

        bool check = isOK(mid, v, sum, n);
        if(check){
            ans = mid;
            hi = mid - 1;
        }
        else{
            lo = mid + 1;
        }
    }

    cout << ans << "\n";
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

