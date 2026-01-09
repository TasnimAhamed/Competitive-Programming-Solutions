#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, m, k; cin >> n >> m >> k;
    vector<int> row(n + 1, 0), col(m + 1, 0);
    for (int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        row[x] = 1;
        col[y] = 1;
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if(row[i] or col[j]) {
                continue;
            }
            ++cnt;
        }   
    }
    cout << cnt << "\n";

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