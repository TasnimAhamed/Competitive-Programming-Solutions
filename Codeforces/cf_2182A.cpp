#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int paisi = 0;
    for (int i = 0; i < n - 3; i++) {
    	if(s[i] == '2' and s[i + 1] == '0' and s[i + 2] == '2' and s[i + 3] == '6') {
    		paisi = 0;
    		break;
    	}
    	else if(s[i] == '2' and s[i + 1] == '0' and s[i + 2] == '2' and s[i + 3] == '5') {
    		paisi = 1;
    	}
    }
    cout << paisi << "\n";
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