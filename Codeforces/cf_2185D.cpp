#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int n, m;
    ll h;
    cin >> n >> m >> h;

    vector<ll> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<ll> curr_add(n, 0);
    vector<int> curr_idx;
    vector<bool> check(n, false); 

    for (int i = 0; i < m; i++) {
        int b;
        ll c;
        cin >> b >> c;
        --b;

        if ((v[b] + curr_add[b] + c) > h) {

            for (auto idx : curr_idx) {
                curr_add[idx] = 0;
                check[idx] = false;
            }
            curr_idx.clear();

        } 
        else {
            if (!check[b]) {
                check[b] = true;
                curr_idx.push_back(b);
            }
            curr_add[b] += c;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] + curr_add[i] << " ";
    }
    cout << "\n";
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}