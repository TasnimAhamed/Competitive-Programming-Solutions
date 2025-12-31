#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, m; cin >> n >> m;
    string a, b;
    map<string, string> mp;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        mp[b] = a;
    }

    for(int i = 0; i < m; i++){
        cin >> a >> b;
        b.pop_back();
        cout << a << " " << b << "; " << "#" << mp[b] << "\n";
    }
    return 0;

}
