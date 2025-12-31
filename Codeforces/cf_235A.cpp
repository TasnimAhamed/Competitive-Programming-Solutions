#include<bits/stdc++.h>
using namespace std;
#define int long long int

int lcm(int a, int b){
    return (a*b/ (__gcd(a,b)));
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    if(n == 1) cout << 1 << "\n";
    else if( n == 2) cout << 2 << "\n";
    else{
        if(n&1){
            cout << (n*(n-1)*(n-2)) << "\n";
        }
        else{
            int ans = 0;
            int st = max(n-5, 1LL);
            for(int i = st; i <= n; i++){
                for(int j = st; j <= n; j++){
                    for(int k = st; k<= n; k++){
                        int res = lcm(lcm(i,j), k);
                        ans = max(ans, res);
                    }
                }
            }
            cout << ans << "\n";
        }
    }

    return 0;

}
