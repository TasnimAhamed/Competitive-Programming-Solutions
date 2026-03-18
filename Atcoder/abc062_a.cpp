#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool is31(int x) {
    return (x == 1 || x == 3 || x == 5 || x == 7 || 
            x == 8 || x == 10 || x == 12);
}

bool is30(int x) {
    return (x == 4 || x == 6 || x == 9 || x == 11);
}

void solve() {
    int x, y;
    cin >> x >> y;
   
   	if (x == 2 or y == 2)  {
   		cout << "No\n";
   	}
   	else if(is30(x) && is30(y)) {
   		cout << "Yes\n";
   	}
   	else if(is31(x) && is31(y)) {
   		cout << "Yes\n";
   	}
   	else {
   		cout << "No\n";
   	}

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}