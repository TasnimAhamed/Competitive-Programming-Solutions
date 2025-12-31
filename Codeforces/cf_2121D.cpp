#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    int a[n], b[n];
    for (auto &x : a) {
    	cin >> x;
    }
    for (auto &x : b) {
    	cin >> x;
    }

    vector<pair<int,int>> ans;

    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (a[j] > a[j+1]) {
          swap(a[j], a[j + 1]);
          ans.push_back({1, j+1});
        }
      }
    }

    for (int i = 0; i < n - 1; i++) {
      for (int j = 0; j < n - i - 1; j++) {
        if (b[j] > b[j+1]) {
          swap(b[j], b[j + 1]);
          ans.push_back({2, j+1});
        }
      }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
          swap(a[i], b[i]);
          ans.push_back({3, i+1});
        }
    }

    cout << ans.size() << "\n";
    for (auto pr : ans) {
      cout << pr.first << " " << pr.second << "\n";
    }
    

    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}