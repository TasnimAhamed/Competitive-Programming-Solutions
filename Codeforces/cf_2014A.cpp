#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        vector<int> v(n);
        int sum = 0, cnt = 0;
        for(auto &x : v){
            cin >> x;
            if(x >= k){
                sum += x;
            }
            if(x == 0 && sum){
                cnt++;
                --sum;
            }
        }

        cout << cnt << "\n";
    }



    return 0;

}
