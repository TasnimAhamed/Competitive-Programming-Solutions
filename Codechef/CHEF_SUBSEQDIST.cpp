#include<bits/stdc++.h>
using namespace std;
using ll = long long int;

void solve()
{
    int n; cin >> n;
    map<int,int> mp;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
    }
    int mx = -1;
    for(auto [key, val] : mp){
        mx = max(val , mx);
    }
    int ans = 0;
    while(mx > 1){
        if(mx&1) mx++;
        mx/=2;
        ans++;
    }

    cout << ans << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }


    return 0;
}


