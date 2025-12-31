#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        vector<int> v;
        v.push_back(0);
        for(int i = 0; i < n; i++){
            int a; cin >> a;
            v.push_back(a);
        }
        int mx = -1;
        for(int i = 1; i < v.size(); i++){
            mx = max(mx, v[i] - v[i-1]);
        }
        mx = max(mx, 2*(x - v[v.size()-1]));

        cout << mx << "\n";
    }

    return 0;

}
