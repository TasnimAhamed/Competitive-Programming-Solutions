#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; cin >> n;
    string str; cin >> str;
   
    int idx[26]= {0};
    idx[str[0] - 'a']++;
    idx[str[n-1] - 'a']++;

    for (int i = 1; i < n-1; i++) {
    	if(idx[str[i] - 'a'] != 0) {
    		cout << "Yes\n";
    		return;
    	}
    	else{
    		idx[str[i] - 'a']++;
    	}
    }

    cout << "No\n";


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