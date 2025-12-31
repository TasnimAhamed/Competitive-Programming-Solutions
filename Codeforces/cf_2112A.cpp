#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int a, x, y;
    cin >> a >> x >> y;

    if(x > y) swap(x, y);

    int ax = abs(a - x);
    int ay = abs(a - y);

    if(ax < ay) {
    	int pos = x;
    	if(pos == a) {
    		++pos;
    	}
    	int bx = abs(pos - x);
    	int by = abs(pos - y);

    	if(bx < ax and by < ay) {
    		puts("YES");
    	}
    	else{
    		puts("NO");
    	}
    }
    else {
    	int pos = y;
    	if(pos == a) {
    		--pos;
    	}
    	int bx = abs(pos - x);
    	int by = abs(pos - y);

    	if(bx < ax and by < ay) {
    		puts("YES");
    	}
    	else{
    		puts("NO");
    	}
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