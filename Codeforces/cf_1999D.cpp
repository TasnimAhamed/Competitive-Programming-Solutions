#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        string s, t; cin >> s >> t;
        int match = 0, i = 0, j = 0;
        while(i < s.size() and j < t.size()){
            if(s[i] == t[j]){
                i++;
                j++;
                ++match;
            }
            else{
                if(s[i] == '?'){
                    s[i] = t[j];
                    i++;
                    j++;
                    ++match;
                }
                else{
                    i++;
                }
            }
        }
        if(match == t.size()){
            cout << "YES\n";
            for(auto &ch : s){
                if(ch == '?') ch = 'a';
            }
            cout << s << '\n';
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}

