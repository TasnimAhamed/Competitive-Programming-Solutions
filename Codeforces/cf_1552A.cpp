#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n;
    cin >> n;
    string s; cin >> s;
    string cpy = s;

    sort(s.begin(), s.end());

    int ans = 0;
    for(int i = 0; i < n; i++){
        if(s[i] != cpy[i]) ++ans;
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

