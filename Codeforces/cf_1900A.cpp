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
        string s; cin >> s;
        int mx = -1, cnt = 0;
        for(auto ch : s){
            if(ch == '.') ++cnt;
            else mx = max(mx,cnt), cnt = 0;
        }
        mx = max(mx , cnt);
        if(mx >= 3){
            cout << 2 << "\n";
        }
        else{
            cout << count(s.begin(), s.end(), '.') << "\n";
        }
    }

    return 0;

}
