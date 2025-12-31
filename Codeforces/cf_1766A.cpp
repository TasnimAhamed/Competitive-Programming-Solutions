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
        if(n <= 10) cout << n << "\n";
        else{
            int nn = log10(n);
            int pw = pow(10, nn);
            int ans = (nn * 9+1) + ((n - pw)/pw);
            cout << ans << "\n";
        }
    }

    return 0;

}
