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
        set<int> st;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            st.insert(x);
        }
        if(st.find(k) == st.end()) cout << "NO\n";
        else cout << "YES\n";
    }

    return 0;

}
