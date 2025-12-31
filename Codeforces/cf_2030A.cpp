#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin  >> n;
        vector<int> v(n);

        for(auto &x : v) cin >>x;

        int mn = *min_element(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());

        cout << (mx - mn) * (n -1) << "\n";
    }

    return 0;

}
