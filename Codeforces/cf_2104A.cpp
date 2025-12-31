#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int a, b, c; cin >> a >> b >> c;
    int sum = a + b + c;
    if(sum%3 == 0){
        int avg = sum/3;
        int res = abs(avg - a) + abs(avg - b);
        if(res == (c - avg)){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    else{
        cout << "NO\n";
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

