#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int l, r; cin >> l >> r;
        if(l == r){
            cout << 1 << '\n';
        }
        else{
            int gp = r - l;
            int ans = (-1 + (sqrt(1 + 8 * gp)))/2;

            cout << ans + 1 << '\n';
        }
    }

    return 0;

}
