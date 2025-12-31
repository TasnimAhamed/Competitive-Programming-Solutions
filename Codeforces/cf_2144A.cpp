#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
 	int n; cin >> n;
 	vector<int> v(n + 2);
 	for (int i = 1; i <= n; i++) {
 		cin >> v[i];
 	}
 	int sum = 0;
 	for (int i = 1; i <= n; i++) {
 		sum += v[i];
 	}
 	int lsum = 0;
 	for (int i = 1; i <= n - 2; i++) {
 		lsum += v[i];
 		int rsum = 0, paisi = 0;
 		for (int j = n; j > i + 1; j--) {
 			set<int> st;
 			st.insert(lsum%3);
 			rsum += v[j];
 			st.insert(rsum%3);
 			int need = sum - (lsum + rsum);
 			st.insert(need%3);
 			if(st.size() == 1 or st.size() == 3) {
 				cout << i << " " << j - 1 << "\n";
 				return;
 			}
 		}
 	}

 	cout << "0 0\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}