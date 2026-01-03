#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[] = {-1, 1, -1, 1};
int dy[] = {-1, -1, 1, 1};

void solve() {
    int a, b; cin >> a >> b;
    int xk, yk; cin >> xk >> yk;
    int xq, yq; cin >> xq >> yq;

    set<pair<int, int>> s1, s2;
    for (int i = 0; i < 4; i++) {
    	s1.insert({xk + dx[i] * a, yk + dy[i] * b});
    	s1.insert({xk + dx[i] * b, yk + dy[i] * a});

    	s2.insert({xq + dx[i] * a, yq + dy[i] * b});
    	s2.insert({xq + dx[i] * b, yq + dy[i] * a});
    }


    int cnt = 0;
    for (auto x : s1) {
    	if(s2.find(x) != s2.end()) {
    		++cnt;
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