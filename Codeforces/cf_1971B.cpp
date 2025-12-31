#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;

        int len = s.size(), paisi = 0, idx = -1;

        for(int i = 1; i < len; i++){
            if(s[0] != s[i]){
                idx = i;
                paisi = 1;
                break;
            }
        }

        if(paisi){
            swap(s[0], s[idx]);
            cout << "YES" << '\n';
            cout << s << '\n';
        }
        else{
            cout << "NO" << '\n';
        }



    }
    return 0;
}

