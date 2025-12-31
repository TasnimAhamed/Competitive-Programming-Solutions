#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

    int t; cin >> t;
    while(t--){
        int n, s, m; cin >> n >> s >> m;
        vector<pair<int,int>> v(n);
        for(auto &x : v){
            cin >> x.first >> x.second;
        }

        if((v[0].first - 0) >= s or (m - v[n-1].second) >= s){
            cout << "YES\n";
        }
        else{
            int lol = 0;
            for(int i = 0; i < n-1; i++){
                if((v[i+1].first - v[i].second) >= s){
                    lol = 1;
                    break;
                }
            }
            if(lol) cout << "YES\n";
            else cout << "NO\n";
        }

    }
    return 0;
}

