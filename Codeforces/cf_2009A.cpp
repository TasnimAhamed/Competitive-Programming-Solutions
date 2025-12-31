#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int mn = INT_MAX;

        int a, b; cin >> a >>b;
        for(int i = a; i<=b; i++){
            int ans = (i - a) + (b - i);
            mn = min(mn, ans);
        }

        cout << mn << '\n';
    }

    return 0;

}
