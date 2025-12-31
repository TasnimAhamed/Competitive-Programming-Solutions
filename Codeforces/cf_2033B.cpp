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

        vector<vector<int>> v(n, vector<int>(n));

        for(auto &vec : v){
            for(auto &x: vec) cin >> x;
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(v[i][j] < 0){
                    int mn = INT_MAX;
                    int st = i, en = j;
                    while( st < n and en < n){
                        mn = min(mn, v[st][en]);
                        if(v[st][en] < 0 ) v[st][en] = 0;
                        st++;
                        en++;
                    }
                    ans += abs(mn);
                }
            }
        }

        cout << ans << "\n";
    }

    return 0;

}
