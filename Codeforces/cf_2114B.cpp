#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int zero = 0, one = 0;
    for(auto ch : s){
        if(ch == '0') zero++;
        else one++;
    }
    one /= 2;
    zero /= 2;
    int total = one + zero;
    if(k <= total and k%2 == total%2){
        int rem = total - k;
        int zero_need = rem/2;
        int one_need = rem/2;
        if(one >= one_need and zero >= zero_need){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    else{
        cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

