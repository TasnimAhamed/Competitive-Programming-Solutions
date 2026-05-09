#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int N = 2*1e7 + 2;

bool isPrime[N];
vector<pair<int,int>> primePair;
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

	for(int i = 3; i<N; i+=2){
		if(!isPrime[i] and !isPrime[i+2]){
			primePair.push_back({i,i+2});
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
		cout << "("<< 3 <<", " << 5 <<")";
	}
	
	return 0;
}