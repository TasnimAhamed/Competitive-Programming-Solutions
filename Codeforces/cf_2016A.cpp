#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    string s; cin >> s;

    int cnt = count(s.begin(), s.end(), '1');
    int ans = 0;
    for(auto ch : s){
        if(ch == '1') {
            ans += (cnt - 1);
        }
        else {
            ans += (cnt + 1);
        }
    }

    cout << ans << "\n";
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

