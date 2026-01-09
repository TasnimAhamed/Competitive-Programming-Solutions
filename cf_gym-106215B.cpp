#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; 
    cin >> s;
    ll cnt = 0;
    ll ans = 0;
    for(auto ch : s) {
        if(ch == 'W') {
            ++cnt;
        }
        else if(ch == 'Y') {
            ans += cnt;
        }
    }
    cout << ans << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}