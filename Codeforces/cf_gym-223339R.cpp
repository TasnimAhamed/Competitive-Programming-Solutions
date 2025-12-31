#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int N = 1e5 + 5;
int arr[N];

bool check_palindrome(int st, int en){
	if(st >= en){
		return true;
	}
	if (arr[st] != arr[en]) {
		return false;
	}

	bool checked = check_palindrome(st+1, en - 1);

	return checked;
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
    	cin >> arr[i];
    }
    if(check_palindrome(0, n-1)){
    	cout << "YES\n";
    }
    else{
    	cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while (t--){
        solve();
    }

    return 0;

}