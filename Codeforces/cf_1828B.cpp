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
        vector<int> v(n);
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            mp[v[i]] = abs(v[i] - (i+1));
        }
        int gcd = mp.begin()->second;
        for(auto pr : mp){
            if(pr.second != 0){
                gcd = __gcd(gcd, pr.second);
            }
        }
        cout << gcd << "\n";
    }

    return 0;

}
