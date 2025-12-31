#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        cout << min(x,y) << ' ' << max(x,y) << '\n';
    }
    return 0;
}

