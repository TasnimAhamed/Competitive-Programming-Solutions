#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    string s; cin >> s;
    map<char,int> mp;
    for(auto ch : s) mp[ch]++;
    for(char ch = 'a'; ch <= 'z'; ch++){
        if(mp[ch] == 0){
            cout << ch << "\n";
            return;
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

