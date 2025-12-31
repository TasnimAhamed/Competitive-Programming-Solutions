#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        map<char,int> mp;
        s += 'a';

        for(auto ch : s) mp[ch]++;

        if(mp.size() == 1){
            cout << "NO" << en;
        }
        else{
            cout << "YES" << en;
            string cpy = s;
            reverse(cpy.begin(), cpy.end());
            if(cpy != s) cout << s << en;
            else{
                s.pop_back();
                cout << 'a' + s << en;
            }
        }
    }

    return 0;

}
