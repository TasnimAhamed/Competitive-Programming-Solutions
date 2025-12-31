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

        if(is_sorted(v.begin(), v.end())){
            int mn = INT_MAX;
            for(int i = 1; i < n; i++){
                int ff = v[i] - v[i-1];
                mn = min(mn, ff/2 + 1);
            }
            cout << mn << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }

    return 0;

}
