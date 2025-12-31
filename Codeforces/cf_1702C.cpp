#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, q; cin >> n >> q;
        map<int, vector<int>> mp;
        for(int i = 1; i <= n; i++){
            int x; cin >> x;
            mp[x].push_back(i);
        }

        for(int i = 1; i <= q; i++){
            int l, r; cin >> l >> r;
            if(mp.find(l) == mp.end() or mp.find(r) == mp.end()){
                cout << "NO\n";
            }
            else{
                int ff = *mp[l].begin();
                int ss = *mp[r].rbegin();

                if(ss > ff){
                    cout << "YES\n";
                }
                else{
                    cout << "NO\n";
                }
            }
        }
    }

    return 0;

}
