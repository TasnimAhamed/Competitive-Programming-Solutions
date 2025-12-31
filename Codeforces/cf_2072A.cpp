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
        int n, k, p; cin >> n >> k >> p;
        k = abs(k);
        if((n*p) < k) cout << -1 << "\n";
        else{
            cout << (k/p + (k%p == 0 ? 0 : 1)) << "\n";
        }
    }

    return 0;

}
