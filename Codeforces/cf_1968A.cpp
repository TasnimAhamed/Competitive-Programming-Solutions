#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int mx = INT_MIN, ans = -1;
        for(int i = 1; i < n; i++){
            int gcd = __gcd(n,i);
            //cout << gcd << '\n';
            if( (gcd + i) >= mx){
                mx = gcd + i;
                //cout << mx << ' ' << i << '\n';
                ans = i;
            }
        }

        cout << ans << '\n';
    }
    return 0;
}

