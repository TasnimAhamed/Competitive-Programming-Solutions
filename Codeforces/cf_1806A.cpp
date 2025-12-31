#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        ll a, b, c, d; cin >> a >> b >> c >> d;
        ll x = b - d + c;
//        cout << x << "\n";
        ll xx = (x - c);
        ll yy = (b - d);

        if(xx == yy and x <= a and d >= b){
            ll ans = abs(a - x) + abs(d - b);
            cout << ans << "\n";
        }
        else{
            cout << -1 << "\n";
        }
    }

    return 0;

}
