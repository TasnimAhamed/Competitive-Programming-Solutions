#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n, a, b; cin >> n >> a >> b;
   	vector<int> vis(n + 1, 0);
   	vector<int> left, right;

   	left.push_back(a);
   	vis[a] = 1;
   	int rem = n / 2 - 1;
   	for (int i = n; i >= 1; i--) {
   		if (!vis[i] and i != b and i > a) {
   			left.push_back(i);
   			vis[i] = 1;
   			--rem;
   		}
   		if (rem == 0) {
   			break;
   		}
   	}

   	for (int i = 1; i <= n; i++) {
   		if (!vis[i]) {
   			right.push_back(i);
   		}
   	}
   	int mn = *min_element(left.begin(), left.end());
   	int mx = *max_element(right.begin(), right.end());

   	if (mn != a or mx != b or left.size() != n / 2 or right.size() != n / 2) {
   		cout << -1 << "\n";
   	}
   	else {
   		for (int i = 0; i < n / 2; i++) {
   			cout << left[i] << " ";
   		}
   		for (int i = 0; i < n / 2; i++) {
   			cout << right[i] << " ";
   		}
   		cout << "\n";
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