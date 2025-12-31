#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m, l, r; cin >> n >> m >> l >> r;
    int x = 0, y = 0;
    while(m > 0){
        if(x>l){
            --x;
            --m;
        }
        else{
            break;
        }
    }

    while(m > 0){
        if(y < r){
            ++y;
            --m;
        }
        else{
            break;
        }
    }

    cout << x << " " << y << "\n";
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

