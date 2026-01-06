#include<bits/stdc++.h>
using namespace std;

bool check_prime(int n){

    if( n < 2 || ( n>2 && n%2==0)) return false;

    for(int i = 3; i*i <= n; i +=2){
        if(n%i == 0) return false;
    }

    return true;
}

void solve(){
    int n; cin >> n;

    if(check_prime(n)) cout <<"yes\n";
    else cout <<"no\n";

}

int main()
{
    int t; cin >> t;
        
    while(t--) solve();


    return 0;
}