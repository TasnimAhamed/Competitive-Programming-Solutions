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
        int x, k; cin >> x >> k;
        if(x%k){
            cout << 1 << en << x << en;
        }
        else{
            cout << 2 << en;
            cout << x-1 << " " << 1 << "\n";
        }
    }

    return 0;

}
