#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, b; cin >> a >> b;

    if(a == b) {
    	cout << 0 << "\n";
    	return;
    }
    // if(b > a) {
    // 	cout << -1 << "\n";
    // 	return;
    // }
    
	bitset<32> bit_a(a);
    bitset<32> bit_b(b);
    vector<int> vals;
   	int ans = 0, curr = 1;
   	for (int i = 0; i < 32; i++) {
        if (bit_a[i] != bit_b[i]) {
            ans += curr;

            if (ans > a) {
                ans -= curr;  
                vals.push_back(ans);  
                ans = curr; 
            }
        }
        curr <<= 1; 
    }

    if (ans > 0) {
        vals.push_back(ans);
    }

   	for (auto x : vals) {
   		if(x > a) {
   			cout << -1 << "\n";
   			return;
   		}
   	}
   	cout << vals.size() << "\n";

   	for (auto x : vals) {
   		cout << x << " ";
   	}
   	cout << "\n";

    


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