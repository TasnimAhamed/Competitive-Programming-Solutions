#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
        cin >> x;
    }
 
    set<int> curr, next;
    curr.insert(v[0]);
    int ans = 1;

    for (int i = 1; i < n; i++) {
        next.insert(v[i]);
        auto it = curr.find(v[i]);
        if (it != curr.end()) {
            curr.erase(it);
        }
        if(curr.empty()){
            ++ans;
            curr = next;
            next.clear();
        }
    }
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;

}
