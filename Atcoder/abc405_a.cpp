#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int r, x; cin >> r >> x;
    if(x == 1){
        if(r >= 1600 and r <= 2999){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    else{
        if(r >= 1200 and r <= 2399){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

