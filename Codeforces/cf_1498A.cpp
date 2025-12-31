#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

ll digitSum(ll n){
    int sum = 0;
    while( n > 0){
        sum += (n%10);
        n /= 10;
    }

    return sum;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        while(true){
            ll dsum = digitSum(n);
            ll gcd = __gcd(n, dsum);
            if(gcd > 1){
                cout << n <<  en;
                break;
            }
            ++n;
        }
    }

    return 0;

}
