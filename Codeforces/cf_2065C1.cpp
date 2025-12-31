#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, m, k; cin >> n >> m;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        cin >> k;
        for(int i = n-1; i >= 0; i--){
            int val = k - v[i];
            if(i == (n-1) and val >= v[i]){
                v[i] = val;
            }
            else{
                if(i != (n - 1) and v[i] > v[i+1]){
                    v[i] = val;
                }
            }
        }
        cout << "\n";
        for(int i = 0; i < n; i++){
            cout << v[i] << " ";
        }
        cout << "\n";
        int paisi  = 0;
        for(int i = 1; i < n; i++){
            if(v[i] < v[i-1]){
                paisi = 1;
                break;
            }
        }

        if(paisi) cout << "NO\n";
        else cout << "YES\n";

    }

    return 0;

}
