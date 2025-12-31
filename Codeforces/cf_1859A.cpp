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
        vector<int> v(n), a, b;
        for(auto &x : v) cin >> x;
        sort(v.begin(), v.end());
        int mn = v[0];
        for(auto x : v){
            if(x == mn) a.push_back(mn);
            else b.push_back(x);
        }
        if(b.size() == 0){
            cout << -1 << "\n";
        }
        else{
            cout << a.size() << " " << b.size() << "\n";
            for(auto x : a) cout << x << " ";
            cout << "\n";
            for(auto x : b) cout << x << " ";
            cout << en;
        }
    }

    return 0;

}
