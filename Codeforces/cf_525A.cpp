#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n; cin >> n;
    string s; cin >> s;
    map<char,int> mp;
    int ans = 0;
    for(auto ch : s){
        if( ch >='a' and ch <='z'){
            mp[ch]++;
        }
        else{
            if(mp[tolower(ch)] > 0){
                mp[tolower(ch)]--;
            }
            else{
                ans++;
            }
        }
    }
    cout << ans << '\n';

    return 0;
}

