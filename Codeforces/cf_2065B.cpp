#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int paisi = 0;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i] == s[i+1]){
                paisi = 1;
                break;
            }
        }
        if(paisi) cout << 1 << "\n";
        else cout << s.size() << "\n";
    }

    return 0;

}
