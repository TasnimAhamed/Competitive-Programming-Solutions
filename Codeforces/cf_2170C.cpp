#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;

    map<ll,int> q, r;
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        q[x]++;
    }
    for(int i = 0; i < n; i++) {
        ll x; cin >> x;
        r[x]++;
    }

    ll cnt = 0;

    for(auto it_q = q.begin(); it_q != q.end(); ++it_q) {
        ll qkey = it_q->first;
        while(it_q->second > 0) {
            bool found = false;
            for(auto it_r = r.begin(); it_r != r.end(); ++it_r) {
                ll rkey = it_r->first;
                if(it_r->second == 0) continue;
 
                ll mn = rkey + 1;
                ll mx = (k - rkey) / qkey;
                if(mn <= mx) {
                    
                    it_q->second--;
                    it_r->second--;
                    cnt++;
                    found = true;
                    break;
                }
            }
            if(!found) break;
        }
    }

    cout << cnt << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) solve();
}
