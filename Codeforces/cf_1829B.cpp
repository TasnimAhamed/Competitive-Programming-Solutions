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
        for(auto &x : v) cin >> x;
        int mx = 0,  cnt = 0;
        for(auto x : v){
            if(x == 0) ++cnt;
            else mx = max(cnt, mx), cnt = 0;
        }
        mx = max(mx, cnt);

        cout << mx << "\n";
    }

    return 0;

}
