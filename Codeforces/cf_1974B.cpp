#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        string ans;
        for(auto ch : s){
            if(ans.find(ch) == string::npos){
                ans+= ch;
            }
        }
        sort(ans.begin(), ans.end());
        map<char,char> ch;
        int len = ans.size();
        for(int i = 0; i < len/2; i++){
            ch[ans[i]] = ans[len-i-1];
            ch[ans[len-i-1]] = ans[i];
        }

        if(len&1){
            ch[ans[len/2]] = ans[len/2];
        }

        for(int i = 0; i < s.size(); i++){
            s[i] = ch[s[i]];
        }

        cout << s << "\n";
    }


    return 0;

}
