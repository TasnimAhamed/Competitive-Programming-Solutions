#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; 
    for (int i = 0; i < n; i++) {
        cin >> s;
        if(s == "WY") {
            cout << "Whitney Young\n";
        }
        else {
            cout << s << "\n";
        }
    }
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