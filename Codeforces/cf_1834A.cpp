#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int pos_one = 0, neg_one = 0;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            if(x == 1) ++pos_one;
            else ++neg_one;
        }
        int res = pos_one - neg_one;
        if(res >= 0){

           if(neg_one&1) cout << 1 << "\n";
           else cout << 0 << "\n";
        }
        else{
            int mn = (abs(res) + 1)/2;
            if((neg_one - mn)%2 == 0) cout << mn << "\n";
            else cout << mn + 1 << "\n";
        }
    }

    return 0;

}
