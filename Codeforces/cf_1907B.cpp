#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    int t; cin>> t;
    while(t--){
        string s; cin>> s;
        vector<int> cp, sm;
        int len = s.size();
        vector<bool> removed(len, true);
        for(int i = 0; i < s.size(); i++){
             if(s[i] == 'B' or s[i] == 'b'){
                if(s[i] == 'B' and cp.size() != 0){
                    int idx = cp.back();
                    removed[idx] = false;
                    cp.pop_back();
                }
                else if(s[i] == 'b' and sm.size() != 0){
                    int idx = sm.back();
                    removed[idx] = false;
                    sm.pop_back();
                }
             }
             else{
                if(s[i] >= 'A' and s[i] <= 'Z'){
                    cp.push_back(i);
                }
                else{
                    sm.push_back(i);
                }
             }
        }

        string ans="";
        for(int i = 0; i < s.size(); i++ ){
            if(s[i] == 'B' or s[i] == 'b') continue;
            if(removed[i]){
                ans += s[i];
            }
        }
        cout << ans << "\n";
    }

    return 0;

}
