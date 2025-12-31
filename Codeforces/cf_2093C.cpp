#include<bits/stdc++.h>
using namespace std;
using ll = long long;

bool checkPrime(int n){
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

void solve(){
    int n, k; cin >> n >> k;
    if(k == 1 and checkPrime(n)){
        cout << "YES\n";
    }
    else if(n == 1 and k == 2){
        cout << "YES\n";
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

