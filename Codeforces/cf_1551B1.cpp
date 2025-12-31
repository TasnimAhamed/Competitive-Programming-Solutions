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
        for(auto ch : s) mp[ch]++;
        int cnt = 0;
        for(auto pr : mp) cnt += min(2, pr.second);

        cout << cnt/2 << "\n";
    }

    return 0;

}
