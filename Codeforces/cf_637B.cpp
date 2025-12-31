#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    map<string,int> chat;
    for(int i = 0;  i < n; i++){
        string s; cin >> s;
        chat[s] = i;
    }
    multimap<int, string, greater<int>> nwchat;
    for(auto pr : chat){
        nwchat.insert({pr.second, pr.first});
    }

    for(auto pr : nwchat){
        cout << pr.second << "\n";
    }

    return 0;

}
