#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    vector<int> cnt(26, 0);

    for(auto ch : s){
        cnt[ch-'a']++;
    }

    for(int i = 0; i <26; i++){
        if(!cnt[i]){
            cout << char(i + 'a') << "\n";
            return 0;
        }
    }

    cout << "None\n";

    return 0;

}
