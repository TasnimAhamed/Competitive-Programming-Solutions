#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e7 + 5;
vector<bool> isPrime(N, false);
vector<int> prime;

void sieve(){
    isPrime[0] = isPrime[1] = true;
    for(int i = 4; i < N; i+=2){
        isPrime[i] = true;
    }
    for(int i = 3; i < N; i+=2){
        if(!isPrime[i]){
            for(int j = i*i; j < N; j +=i){
                isPrime[j] = true;
            }
        }
    }
    prime.push_back(2);
    for(int i = 3; i < N; i+=2){
        if(!isPrime[i]){
            prime.push_back(i);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    sieve();

    int n; cin >> n;

    for(int i = 0; i < n; i++){
        cout << prime[i] << " ";
    }
    cout << "\n";

    return 0;

}
