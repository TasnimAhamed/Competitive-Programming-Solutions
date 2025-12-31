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
        multiset<int> odd, even;
        for(auto x : v){
            if(x&1){
                odd.insert(x);
            }
            else{
                even.insert(x);
            }
        }
        for(auto x : odd) cout << x << " ";
        for(auto x : even) cout << x << " ";
        cout << en;
    }

    return 0;

}
