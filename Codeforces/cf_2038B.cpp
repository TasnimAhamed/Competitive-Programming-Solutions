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
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        int div = n - 2;
        for(int i = 1; i*i <= div; i++){
            if(div%i == 0){
                int ff = i;
                int ss = div/i;
                if(ff == ss and mp[ff] >=2){
                    cout << ff <<  " " << ss << "\n";
                    break;
                }
                else if(mp[ff] and mp[ss]){
                    cout << ff << " " << ss << "\n";
                    break;
                }
            }
        }
    }

    return 0;

}
