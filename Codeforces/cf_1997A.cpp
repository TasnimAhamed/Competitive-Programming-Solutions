#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;

        int idx = -1;
        for(int i = 0; i < s.size() -1; i++){
            if(s[i] == s[i+1]){
                idx = i;
            }
        }

        if(idx == -1){
            if(s[0] == 'a'){
                cout << ('b' + s) << "\n";
            }
            else{
                cout << ('a' + s) << "\n";
            }
        }
        else{
            char ch = s[idx] + 1;
            if(s[idx] == 'z'){
                ch = s[idx] - 1;
            }
            cout << s.substr(0,idx+1) + ch + s.substr(idx+1) << "\n";
        }
    }

    return 0;

}
