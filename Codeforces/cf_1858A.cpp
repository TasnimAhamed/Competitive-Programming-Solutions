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
        int a, b, c; cin >> a >> b >> c;
        a += (c/2 + (c&1 ? 1 : 0));
        b += (c/2);
        if(a > b) cout << "First\n";
        else cout << "Second\n";
    }

    return 0;

}
