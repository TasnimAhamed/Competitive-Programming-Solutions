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
        vector<pair<int,int>> grid(n);
        for(auto &x : grid){
            cin >> x.first >> x.second;
        }
        map<int,pair<int,int>> mp;

        int cnt = 0, one = 0, zero = 0;
        set<int> ones;
        set<int> zeros;

        for(auto x:grid){
            if(x.second == 0){
                mp[x.first].first++;
            }
            else{
                mp[x.first].second++;
            }
            int ss = mp[x.first].first + mp[x.first].second;
            if(ss == 2){
                cnt++;
            }
            if(x.second == 1) one++;
            else{
                zero++;
            }
        }

        for(auto [key, pr] : mp){
            int ss = pr.first + pr.second;
            if(ss != 2 and pr.second == 1){
                ones.insert(key);
            }
            else{
                zeros.insert(key);
            }
        }



        int ans = (one + zero - 2) * cnt;

        for(int one : ones){
            for(int zero : zeros){
                int fi = one + zero;
                auto it = zeros.lower_bound(fi);
                if(it != zeros.end() and *it == fi){
                    ans++;
                    cout << "one : " << one << '\n';
                }
            }
        }

        cout << ans << '\n';


    }

    return 0;

}
