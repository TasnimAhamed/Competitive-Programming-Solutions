#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n-1), ans;
        for(auto &x : v) cin >> x;
        ans.push_back(100000000);
        for(int i = v.size()-1; i>=0; i--){
            ans.push_back(ans.back() - v[i]);
        }

        reverse(ans.begin(), ans.end());

        for(int i = 0; i < n; i++){
            cout << ans[i] << ( i<n-1 ? ' ' : '\n');
        }

    }
    return 0;
}

