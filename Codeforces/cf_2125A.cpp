#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
     string s; cin >> s;

     int p = s.find("FFT");
     int p2 = s.find("NTT");
     if(p != -1 or p2 != -1) {
     	int cnt = 0;
     	for(auto ch : s) {
     		if(ch  == 'T') {
     			++cnt;
     		}
     	}
     	for (int i = 0; i < cnt; i++) {
     		cout << "T";
     	}
     	for(auto ch : s) {
     		if( ch != 'T') {
     			cout << ch;
     		}
     	}
     	cout << '\n';
     }
     else{
     	cout << s << "\n";
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