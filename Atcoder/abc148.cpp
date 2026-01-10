#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    string a, b; cin >> a >> b;

    string ans="";
    for(int i = 0; i < a.size(); i++){
        ans += a[i];
        ans += b[i];
    }

    cout << ans << "\n";

    return 0;

}
