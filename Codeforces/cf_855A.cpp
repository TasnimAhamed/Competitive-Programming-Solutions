#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    set<string> st;

    for(int i = 0; i< n; i++){
        string s; cin >> s;
        if(st.find(s) == st.end()){
            cout << "NO\n";
            st.insert(s);
        }
        else{
            cout << "YES\n";
        }
    }

    return 0;

}
