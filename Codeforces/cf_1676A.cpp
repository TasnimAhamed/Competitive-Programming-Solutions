#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;
    cin >> s;
    int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
    int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');

    if(sum1 == sum2){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
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