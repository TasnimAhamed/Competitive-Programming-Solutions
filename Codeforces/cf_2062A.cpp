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
        int ans = count(s.begin(), s.end(), '1');

        cout << ans << "\n";
    }

    return 0;

}
