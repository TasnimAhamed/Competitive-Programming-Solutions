#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<ll> v(n + 1), pref(n + 1, 0);
    for (int i = 1; i <= n;i++) {
        cin >> v[i];
        pref[i] = v[i] + pref[i - 1];
    }

    ll st = -1, en = -1;
    ll cost = 0;
    for (int i = 1; i <= n; i++) {
        if(v[i] != i) {
            if(st == -1) {
                st = i;
            }
            en = max(en, v[i]);

        }
        else{
            if(st != -1 and en != -1 and en <= i) {
                // cout << st << " " << en << "\n";
                // cout << pref[en] - pref[st - 1] << "\n";
                cost += pref[en] - pref[st - 1];
                st = -1, en = -1;
            }
        }
    }
    if(st != -1 and en != -1) {
        cost += pref[en] - pref[st - 1];
    }

    cout << cost << "\n";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
}