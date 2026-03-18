#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		int x; cin >> x;
		if (x) {
			++cnt;
		}
	}
    
    if (cnt == 0) {
    	cout << 0 << "\n";
    }
    else if(cnt <= 3) {
    	cout << 1 << "\n";
    }
    else {
    	cout << 2 << "\n";
    }

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--){
        solve();
    }
    return 0;
}
