#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    map<int, int> mp;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        mp[x]++;
    }

    n /= 3;

    if(mp[1] == 0 or mp[1] != n or mp[5] != 0 or mp[7] != 0 or mp.size() < 3 ) {
        cout << -1 << "\n";
    }
    else {
        if(mp[6] < mp[3] or (mp[2] + mp[3] < mp[4] + mp[6])) {
            cout << -1 << "\n";
            return;
        }
        for (int i = 1; i <= n; i++) {
            cout << 1 << " ";
            if(mp[2] != 0) {
                cout << 2 << " ";
                mp[2]--;
                if(mp[4] != 0) {
                    cout << 4 << "\n";
                    mp[4]--;
                }
                else {
                    cout << 6 << "\n";
                    mp[6]--;
                }
            }
            else{
                cout << 3 << " " << 6 << "\n";
            }
        }
    }

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
