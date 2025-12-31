#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 25;
int n, w;
vector<pair<int,int>> v(N);

int knapsack(int idx, int w, int curr) {
	if (idx >= n) {
		return curr;
	}
	int ff = 0, ss = 0, tt = 0;
	if (w >= v[idx].first) {
		ff = knapsack(idx+1, w - v[idx].first, curr + v[idx].second);
		ss = knapsack(idx+1, w, curr);
	}
	else{
		tt = knapsack(idx+1, w, curr);
	}

	return max({ff, ss, tt});
}

void solve() {
   cin >> n >> w;
   for (int i = 0; i < N; i++) {
   		cin >> v[i].first >> v[i].second;
   }

   cout << knapsack(0, w, 0) << "\n";

}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}