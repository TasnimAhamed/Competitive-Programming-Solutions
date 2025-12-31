#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<pair<int,int>> v(n);
    for(auto &x : v) cin >> x.first >> x.second;

    sort(v.begin(), v.end(), [&](const pair<int,int> a, const pair<int,int> b){
            if((a.second - a.first) >= (b.second - b.first)) return true;
            return false;
    });

    for(auto x : v){
        cout << x.first << " " << x.second << "\n";
    }

    return 0;

}
