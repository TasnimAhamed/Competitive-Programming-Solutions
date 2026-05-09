#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int tt = 0;

void solve() {
    int n; cin >> n;
    vector<array<int, 3>> jobs;

    for (int i = 1; i <= n; i++) {
    	int x, y; cin >> x >> y;
    	jobs.push_back({x, y, i});
    } 

    sort(jobs.begin(), jobs.end(), [&] (const array<int, 3> a, const array<int, 3> b) {
    	double cost1 = double(a[1]) / a[0];
    	double cost2 = double(b[1]) / b[0];

    	return cost1 > cost2;
    });

    if (tt) {
    	cout << "\n";
    }

    for (int i = 0; i < n; i++) {
    	array<int, 3> job = jobs[i];
    	cout << jobs[i][2] << (i == n - 1 ? "\n" : " ");
    }
    ++tt;
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