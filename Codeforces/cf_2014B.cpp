#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;

        int ans = n*(n+1)/ 2;
        int ff = n - k;
        int ans2 = (ff * (ff + 1)/2);

        int total = ans - ans2;

        if(total%2)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }

    }

    return 0;

}
