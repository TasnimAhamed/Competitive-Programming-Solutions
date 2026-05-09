#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    set<ll> s;
    s.insert(1);
    ll w;
    for (int t = 1; t <= 1500; t++) {
    	w = *s.begin();
    	s.erase(s.begin());

    	s.insert(w * 2);
    	s.insert(w * 3);
    	s.insert(w * 5);
    }
    cout << "The 1500'th ugly number is " << w << ".\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}