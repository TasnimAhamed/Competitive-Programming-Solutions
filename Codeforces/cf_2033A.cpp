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
        if(n&1) cout << "Kosuke\n";
        else cout << "Sakurako\n";
    }

    return 0;

}
