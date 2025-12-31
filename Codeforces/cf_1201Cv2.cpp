#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    vector<ll> v(n);
    for(auto &x : v) cin >> x;

    sort(v.begin(), v.end());

    int idx = n/2;
    auto OK = [&](ll mid) -> bool {
        ll sum = 0;
        for (int i = idx; i < n; i++) {
            if (v[i] <= mid) {
                sum += (mid - v[i]);
            }
            if (sum > k) break;
        }
        return sum <= k;
    };

    ll lo = 0, hi = 2e18, ansdx = v[idx];
    while(lo <= hi){
        ll mid = lo + (hi - lo)/2;
        bool lol = OK(mid);
        
        if(lol){
            ansdx = max(ansdx, mid);
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }

    cout << ansdx << "\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

