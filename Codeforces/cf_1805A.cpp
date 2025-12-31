#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int nn = 1LL << 8;

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        int paisi = 0;
        for(int i = 0; i < nn; i++){
            vector<int> b;
            for(int j = 0; j < n; j++){
                b.push_back(v[j]^i);
            }
            int xr = 0;
            for(auto x : b) xr ^= x;
            if(xr == 0){
                cout << i << "\n";
                paisi = 1;
                break;
            }
        }
        if(!paisi) cout << -1 << "\n";
    }

    return 0;

}
