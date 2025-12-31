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
        string s; cin >> s;
        int t1 = count(s.begin(), s.end(), '-');
        int t2 = count(s.begin(), s.end(), '_');

        ll l1 = t1/2 + (t1&1);
        ll l2 = t1/2;

        ll ans = l1 * t2 * l2;

        cout << ans << en << en;

    }

    return 0;

}
