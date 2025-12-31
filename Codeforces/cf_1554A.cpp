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
        int n; cin >> n;
        vector<ll> v(n);
        for(auto &x : v) cin >> x;
        ll mx(0);

        for(int i = 1; i <n; i++){
            mx = max(mx, v[i]*v[i-1]);
        }

        cout << mx << "\n";
    }

    return 0;

}
