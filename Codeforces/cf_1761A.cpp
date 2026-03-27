#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b; cin >> n >> a >> b;
    if (n == a and n == b) {
        cout << "Yes\n";
        return;
    }

    if ((a + b) > n) {
        cout << "No\n";
        return;
    }

    int diff = n - (a + b);
    if (diff >= 2) {
        cout << "Yes\n";
    }
    else {
        cout << "No\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; 
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}