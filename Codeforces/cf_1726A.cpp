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
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        if(n == 1) cout << 0 << "\n";
        else{
            auto its = v.begin();
            auto ens = v.end();

            int mx = v[n-1] - v[0];
            ++its;
            int mx2 = *max_element(its, v.end()) - v[0];
            --ens;
            int mx3 = v[n-1] - *min_element(v.begin(), ens);
            int mx4 = INT_MIN;
            for(int i = 0; i < n-1; i++){
                int xx = v[i] - v[i+1];
                mx4 = max(mx4, xx);
            }

            cout << max({mx, mx2, mx3, mx4}) << en;
        }

    }

    return 0;

}
