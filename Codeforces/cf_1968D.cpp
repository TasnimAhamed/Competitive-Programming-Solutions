#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n, pb, ps, k; cin >> n >> pb >> ps >> k;
        vector<int> p(n), v(n);

        for(auto &x : p) cin  >> x;
        for(auto &x : v) cin  >> x;

        for(auto x : v) cout << x << '\n';
    }
    return 0;
}

