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
        int n, k; cin >> n >> k;
        string s; cin >> s;
        map<char, int> mp;
        for(auto ch : s) mp[ch]++;
        int odd_cnt = 0;

        for(auto pr : mp){
            if(pr.second&1) odd_cnt++;
        }

        odd_cnt -= min(odd_cnt, k);

        if(odd_cnt <= 1) cout << "Yes" << en;
        else cout << "No" << en;

    }

    return 0;

}
