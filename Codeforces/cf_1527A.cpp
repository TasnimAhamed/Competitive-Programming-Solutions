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
        int bit = (int)log2(n);
        cout << ((1 << bit) - 1) << "\n";
    }

    return 0;

}
