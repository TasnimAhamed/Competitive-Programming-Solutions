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
        map<int,int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        if(mp.size() > 2) cout << "NO\n";
        else{
            if(abs(mp.begin()->second - mp.rbegin()->second) <= 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }

    return 0;

}
