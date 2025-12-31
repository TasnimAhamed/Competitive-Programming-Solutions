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
        vector<int> v(n);
        int paisi = 0;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            if(v[i] <= 2 * max(i, n-i-1)){
                paisi = 1;
            }
        }
        if(paisi) cout << "No\n";
        else cout << "Yes\n";
    }

    return 0;

}
