#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;

        int row = (n/2) + (n%2);
        int seat = (k/2) + (k%2);

        cout << row * seat << "\n";
    }

    return 0;

}
