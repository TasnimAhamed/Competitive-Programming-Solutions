#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e6 + 10;

bool isPrime[N];
int prime[N];
int getDigitSum(int n){
	int ans = 0;
	while( n){
		ans += (n%10);
		n/=10;
	}
	return ans;
}
void sieve()
{
	int sq = sqrt(N);
	isPrime[0] = isPrime[1] = 1;
	for(int i = 4; i<N; i +=2){
		isPrime[i] = 1;
	}
	for(int i = 3; i <= sq; i+=2){
		if(!isPrime[i]){
			for(int j = i * i; j < N; j += i){
				isPrime[j] = 1;
			}
		}
	}
	
	prime[2] = 1;
	for(int i = 3; i<N; i+=2){

		if(isPrime[i] == 0){
			int ff = getDigitSum(i);
			if(isPrime[ff] == 0) prime[i] = 1;
		}
	}

	for(int i = 2; i < N; i++){
		prime[i] += prime[i-1];
	}

}

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();

	int t;
	scanf("%lld", &t);
	while(t--){
		int a, b;
		scanf("%lld %lld", &a, &b);
		printf("%lld\n", (prime[b] - prime[a-1]));
	}
	
	return 0;
}