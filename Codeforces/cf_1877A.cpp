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
        vector<int> v(n-1);
        for(auto &x : v) cin >> x;
        int res = accumulate(v.begin(), v.end(), 0);

        cout << -res << "\n";
    }

    return 0;

}
