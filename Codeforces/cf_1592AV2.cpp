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
        int n, h; cin >> n >> h;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end(), greater<int>());
        int sum = v[0] + v[1];
        int ans = 2*(h/sum);
        h%=sum;
        if(!h) cout << ans << "\n";
        else{
            if(h > v[0]) ans+= 2;
            else ans++;
            cout << ans << "\n";
        }
    }

    return 0;

}
