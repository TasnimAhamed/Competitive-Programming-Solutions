#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkDecreasing(string &s) {{
	int sz = s.size();
	for (int i = 0; i < sz - 1; i++) {
		if(s[i] > s[i + 1]) {
			return false;
		}
	}

	return true;
}}

bool checkPalindrome(string &s) {
	string tmp = s;
	reverse(tmp.begin(), tmp.end());

	return tmp == s;
}

void solve() {
    int n; cin >> n;
    string s; cin >> s;

   int paisi = 0;
   for (int mask = 0; mask < (1  << n); mask++) {
   		string p = "", x = "";
   		vector<int> idx;
   		for (int i = 0; i < n; i++) {
   			if(mask & (1 << i)) {
   				p += s[i];
   				idx.push_back(i + 1);
   			}
   			else{
   				x += s[i];
   			}
   		}
   		
   		if(checkDecreasing(p) and checkPalindrome(x)) {
   			cout << idx.size() << "\n";
   			for (auto x : idx){
   				cout << x << " ";
   			}
   			cout << "\n";
   			paisi = 1;
	   		return;
   		}
   }

   if(!paisi) {
   	cout << -1 << "\n";
   }


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