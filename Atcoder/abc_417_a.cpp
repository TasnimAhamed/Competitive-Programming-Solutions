#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, a, b; cin >> n >> a >> b;
    string s; cin >> s;
    for (int i = 0; i < b; i++) {
    	s.pop_back();
    }
    for (int i = a; i < s.size(); i++) {
    	cout << s[i];
    }
    cout << "\n";
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