#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s; cin >> s;
    int cnt0 = 0, cnt5 = 0, five = 0, zero = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
    	if(zero) {
    		if(s[i] == '5' or s[i] == '0') {
    			break;
    		}
    		else{
    			++cnt0;
    		}
    	}
    	else if(s[i] == '0') {
    		zero = 1;
    	}
    	else{
    		cnt0++;
    	}
    }

    for (int i = s.size() - 1; i >= 0; i--) {
    	if(five) {
    		if(s[i] == '7' or s[i] == '2') {
    			break;
    		}
    		else{
    			++cnt5;
    		}
    	}
    	else if(s[i] == '5') {
    		five = 1;
    	}
    	else{
    		cnt5++;
    	}
    }
    if(zero and five) {
    	cout <<  min(cnt0, cnt5) << "\n";
    }
    else if(zero){
    	cout << cnt0 << "\n";
    }
    else {
    	cout << cnt5 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    cin.ignore();
    while (t--){
        solve();
    }

    return 0;
}