#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n;
        map<int, int> mp;

        for(int i = 0; i < n; i++){
            cin >> x;
            mp[x]++;
        }

        if( n < 3){
            cout << 0 << '\n';
        }
        else{
            long long ans =  0;
            for(auto pr : mp){
                ans += (pr.second)/3;
            }
            cout << ans << '\n';
        }
    }




    return 0;
}
