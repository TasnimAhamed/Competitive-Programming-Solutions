#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int a, b, k; cin >> a >> b >> k;
        int ans1 = a/k + ((a%k == 0) ? 0 : 1);
        int ans2 = b/k + ((b%k == 0) ? 0 : 1);


        if(ans1 <= ans2){
            cout << (max(ans1,ans2) * 2) << '\n';
        }
        else{
            cout << (max(ans1,ans2) * 2) - 1 << '\n';
        }
    }

    return 0;

}
