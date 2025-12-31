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
        int n, k; cin >> n >> k;
        vector<int> v(n);
        for(auto &x : v) cin >> x;
        int sum = accumulate(v.begin(), v.end(), 0);
        if((sum/n) == k) cout << "YES" << en;
        else cout << "NO" << en;
    }

    return 0;

}
