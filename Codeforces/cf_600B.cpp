#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);

    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    sort(a.begin(), a.end());
    vector<int> ans;
    for(auto x : b){
        int idx = upper_bound(a.begin(), a.end(), x) - a.begin();
        ans.push_back(idx);
    }
    for(auto x : ans) {
        cout << x << " ";
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
//    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

