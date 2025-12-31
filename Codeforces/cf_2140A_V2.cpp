#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    string tmp = s;
    sort(s.begin(), s.end());

    int cnt = 0;

    for (int i = 0; i < n; i++) {
    	if(s[i] != tmp[i]) {
    		++cnt;
    	}
    }
    cout << cnt/2 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}