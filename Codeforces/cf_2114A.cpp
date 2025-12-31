#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin >> s;
    int num = 0;
    for(auto ch : s){
        num = num * 10 + (ch - '0');
    }
    int sq = sqrt((double)num);
    if(sq * sq == num){
        cout << 0  << " " << sq << "\n";
    }
    else{
        cout << -1 << "\n";
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

