#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 1e6 + 10;

bool isPrime[N];

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
}

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	sieve();

	int n;
	while(cin >> n && n){
	
		int count = 0;
		map<int, int> mp;
		for(int i = 2; i <= n; i++){
			if(isPrime[i] == 0 and isPrime[n-i] == 0){
				if(mp[i] == 0 or mp[n-i] == 0){
					mp[i] = 1;
					mp[n-i] = 1;
					++count;
				}
			}
		}

		cout << count << "\n";
	}
	
	return 0;
}