#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s;
    cin >> s;
    map<char, int> mp;
    for(auto ch : s) mp[ch]++;
    if(mp['0'] == 0){
        if(s.size() != 1){
            cout << s.size() - 1 << "\n";
        }
        else{
            cout << 0 << "\n";
        }
    }
    else{
        int ans = 0;
        while(s.back() == '0'){
            ans++;
            s.pop_back();
        }
        if(ans == mp['0']){
            cout << s.size() - 1 + ans << "\n";
        }
        else{
            int zero = 0;
            for(auto ch : s) if(ch == '0') zero++;
            int res = s.size() - zero - 1;
            cout << (res + ans) << "\n";

        }
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

