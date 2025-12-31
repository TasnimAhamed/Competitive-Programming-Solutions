#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    set<int> st;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        mp[x]++;
        st.insert(x);
    }

    int rem = 0;
    set<int>::iterator it;
    for(it = st.begin(); it != st.end(); it++){
        int x = *it;

        auto tmp = it;
        if((++tmp) == st.end()) break;
        tmp = it;
        int y = *(++tmp);
        int valx = mp[x];
        int valy = mp[y];

        int mn = min(valx, valy);
        mp[x] = 0;
        valy -= mn;
        rem -= min(valy, rem);
        rem += max(valx-mn, 0LL);
    }

    int ans = 0;

    for(auto [key, val] : mp){
        ans += val;
    }
    cout << ans + rem << "\n";

    return 0;

}
