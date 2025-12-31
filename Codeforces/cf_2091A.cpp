#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    map<int,int> mp;
    int ans = 25;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        if(mp[0] >= 3 and mp[1] >= 1 and mp[2] >= 2 and mp[3] >= 1 and mp[5] >= 1){
            ans = min(ans, i + 1);
        }
    }

    if(ans == 25){
        cout << "0\n";
    }
    else{
        cout << ans << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

