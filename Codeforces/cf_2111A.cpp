#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int x; cin >> x;

    if(x == 1){
        cout << 3 << "\n";
    }
    else{
        cout << (floor(log2(x)) + 1) * 2 + 1 << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

