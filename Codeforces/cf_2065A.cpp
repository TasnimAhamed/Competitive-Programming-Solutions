#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        string ans;
        for(int i = 0; i < s.size()-2; i++){
            ans += s[i];
        }
        ans+="i";

        cout << ans << "\n";
    }

    return 0;

}
