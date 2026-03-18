#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> p(n), a(n);
    unordered_map<int, int> pos;
    for (int i = 0; i < n; i++) {
    	cin >> p[i];
    	pos[p[i]] = i;
    }

    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }

    for (int i = 1; i < n; i++) {
        if (pos[a[i - 1]] > pos[a[i]]) {
            cout << "NO\n";
            return;
        }   
    }

    cout << "YES\n";

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