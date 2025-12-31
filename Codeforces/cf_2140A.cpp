#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    int one = count(s.begin(), s.end(), '1'); 
    int zero = count(s.begin(), s.end(), '0'); 

    if(one == n or zero == n) {
    	cout << 0 << "\n";
    	return;
    }
    int i = 0, j = n - 1;
  int cnt = 0;
  while( i < j) {
  	if(s[i] == '1' and s[j] == '0') {
  		++cnt;
  		swap(s[i], s[j]);
  		++i;
  		--j;
  	}
  	else{
  		if(s[i] != '1') {
  			++i;
  		}
  		if(s[j] != '0') {
  			--j;
  		}
  	}
  }

  cout << cnt << "\n";


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