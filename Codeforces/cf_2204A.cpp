#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s;
    cin >> s;

    int cnt = 1;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'R') {
        	cnt++;
        }
        else {
        	break;
        }
    }

    cout << cnt << "\n";
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