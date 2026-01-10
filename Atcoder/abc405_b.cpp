#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; cin >> n >> m;
    int x;
    map<int, set<int>> mp;
    for(int i= 1; i <= n; i++){
        cin >> x;
        mp[x].insert(i);
    }
    int ans = n;
    for(int i=1; i<= m; i++){
        if(mp[i].size()){
            int ff = *mp[i].begin();
            int ss = n - ff + 1;
            ans = min(ans, ss);
        }
        else{
            cout << 0 << "\n";
            return;
        }
    }

    cout << ans << "\n";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

