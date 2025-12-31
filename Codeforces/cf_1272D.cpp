#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
    vector<vector<int>> st;
    vector<int> tmp;
    for (int i = 0; i < n; i++){
        if(tmp.size() > 0) {
            int top = tmp.back();
            if(top < v[i]) {
                tmp.push_back(v[i]);
            }
            else{
                st.push_back(tmp);
                tmp.clear();
                tmp.push_back(v[i]);
            }
        }
        else{
            tmp.push_back(v[i]);
        }
    }

    if(tmp.size() > 0) {
        st.push_back(tmp);
    }

    // for (auto vv : st) {
    //     for ( auto x : vv) {
    //         cout << x << ' ';
    //     }
    //     cout << "\n";
    // }

    int sz = st.size();
    int mx = st[0].size();
    
    for (int i = 1; i < sz; i++) {
        if(st[i].size() == 1 or st[i-1].size() == 1) {
            int sz1 = st[i].size();
            int sz2 = st[i-1].size();
            mx = max({mx, sz1, sz2});
        }
        else{
            int t_sz = st[i-1].size();
            int n_sz = st[i].size();
            int ff = t_sz + n_sz - 1;
            
            if(st[i-1][t_sz - 2] < st[i][0]) {
                mx = max(mx, ff);
            }
            else if(st[i - 1][t_sz - 1] < st[i][1]) {
                mx = max(mx, ff);
            }
            else{
                mx = max({t_sz, n_sz, mx});
            }
        }
    }

    cout << mx << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;
}

