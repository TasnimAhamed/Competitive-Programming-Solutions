#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        int ans = 0;

        for(auto [key, val]: mp){
            ans += (val/2);
        }

        cout << ans << "\n";

    }

    return 0;

}
