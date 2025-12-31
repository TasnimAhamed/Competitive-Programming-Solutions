#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, h; cin >> n >> h;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());

        ll mx = v[n-1];
        ll smx = v[n-2];

        ll lo = 1, hi = 1e9, ans = 1e9;
        while(lo <= hi){
            ll mid = lo + (hi - lo)/2;
            ll res = mid * mx + (mid-1)*smx;

            if(res >= h){
                ans = min(ans, 2*mid - 1);
                hi = mid-1;
            }
            else if((res + smx) >= h){
                ans = min(ans, 2*mid);
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        cout << ans << "\n";
    }

    return 0;

}
