#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int st = 0, prevOne = 0, paisi = -1;
        if(s[st] == '1'){
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '0'){
                    st = i;
                    break;
                }
            }
        }
        else{
            for(int i = 0; i < s.size(); i++){
                if(s[i] == '0' and prevOne){
                    st = i;
                    break;
                }
                if(s[i] == '1'){
                    ++prevOne;
                }
            }
        }

        if(st == 0){
            cout << 1 << '\n';
        }
        else{
            int ans = 1;

            int one = -1, cnt  = 0, ch = 0;
            for(int i = st; i < s.size(); i++){
                if(s[i] == '0' and one == 1){
                    ++ans;
                    one = -1;
                    ch = 0;
                    st = i;
                    paisi = 1;
                    break;
                }
                if(s[i] == '1' and one == -1){
                    one = 1;
                }
                ++ch;
            }
            if(ch){
                ++ans;
                if(s[s.size()-1] == '1'  and prevOne) ++ans;
                cout << ans << '\n';
            }
            else{
                if(paisi and prevOne) ++ans;

                int one  = 0, zero = 0;
                for(int i = st; i < s.size(); i++){
                    if(s[i] == '0'){
                        ++zero;
                        if(one){
                            ++ans;
                            one = 0;
                        }
                    }
                    else{
                        one++;
                        if(zero){
                            ++ans;
                            zero = 0;
                        }
                    }
                }

                if(one) ++ans;
                if(zero) ++ans;

                cout << ans << '\n';
            }


        }

    }
    return 0;
}

