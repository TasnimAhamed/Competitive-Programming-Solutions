#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int n; cin >> n;
    string s;

    unordered_set<string> names;
    unordered_map<string, int> mp;
    for(int i= 0 ; i < n; i++){
        cin >> s;
        if(names.find(s) == names.end()){
            cout << "OK" << '\n';
            names.insert(s);
            mp[s]++;
        }
        else{
            cout << s << mp[s]<<'\n';
            mp[s]++;
        }
    }

    return 0;
}
