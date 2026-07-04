#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,m;
    cin >> n >> m;

    string s[n + 5];
    for(int i = 0; i < n;i++){
        cin >> s[i];
    }

    int mn = INT_MAX;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = 0;
            for (int k = 0; k < m; k++) {
                int temp = abs(s[i][k] - s[j][k]);
                // cout<<temp<<endl;
                sum += temp;
            }
            mn = min(mn, sum);
        }
    }
    cout << mn << "\n";

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