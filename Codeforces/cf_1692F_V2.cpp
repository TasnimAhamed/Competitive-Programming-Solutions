#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    vector<int> v;
    int idx[10] = { 0 };
    for (int i = 0; i < n; i++) {
    	int x; cin >> x;
    	x %= 10;
    	if (idx[x] < 3) {
            v.push_back(x);
            idx[x]++;
        }
    }
    for (int i = 0; i < v.size(); i++) {
    	for (int j = i + 1; j < v.size(); j++) {
            for (int k = j + 1; k < v.size(); k++) {
                if ((v[i] + v[j] + v[k]) % 10 == 3) {
                    cout << "YES\n";
                    return;
                }
            }
        }
    }

    cout << "NO\n";
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