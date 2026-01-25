#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v(n);
    for (auto &x : v) {
    	cin >> x;
    }

    vector<int> suff(n), pos(n);
    suff[n - 1] = v[n - 1];
    pos[n - 1] = n - 1;

    for (int i = n - 2; i >= 0; i--) {
        if (v[i] > suff[i + 1]) {
            suff[i] = v[i];
            pos[i] = i;
        } 
        else {
            suff[i] = suff[i + 1];
            pos[i] = pos[i + 1];
        }
    }

    for (int i = 0; i < n; i++) {
        if (v[i] != suff[i]) {
            reverse(v.begin() + i, v.begin() + pos[i] + 1);
            break;
        }
    }

    for (auto x : v) {
        cout << x << " ";
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