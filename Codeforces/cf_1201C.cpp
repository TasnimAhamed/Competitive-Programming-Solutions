#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    vector<ll> v(n), pre(n);
    for(auto &x : v) cin >> x;

    if(n == 1){
        cout << v[0] + k << "\n";
        return;
    }

    sort(v.begin(), v.end());
    pre[0] = v[0];

    for(int i = 1; i < n; i++){
        pre[i] = pre[i-1] + v[i];
    }
    int idx = n/2;
    auto OK = [&] (int mid){
        ll need = 1LL * v[mid] * (mid - idx + 1) - (pre[mid] - pre[idx-1]);
        return need;
    };

    int lo = n/2, hi = n-1, ansdx = n/2;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        ll need = OK(mid);

        if(need <= k){
            ansdx = mid;
            lo = mid + 1;
        }
        else{
            hi = mid - 1;
        }
    }
    
    ll rem = k - (1LL * v[ansdx] * (ansdx - idx + 1) - (pre[ansdx] - pre[idx-1]));
    
    cout << (v[ansdx] + (rem/(ansdx - idx + 1))) << "\n";

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

