#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define pf push_front
#define ppf pop_front
#define ppb pop_back
#define sz size()
#define mpr make_pair
#define ff first
#define ss second
#define rep(i,n) for(int i=0;i<n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define repc(i,start,stop,inc) for(int i=start;i<=stop;i+=inc)
#define mem(name,value) memset(name, value, sizeof(name))
#define all(x) x.begin(),x.end()
#define rall(x) x.rbegin(),x.rend()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vi vector<int>
#define vll vector<ll>
#define vpii vector<pii>
#define vpll vector<pll>
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
#define nn cout<<"\n"
#define Case(i) cout<<"Case "<<int(i)<<": ";
#define scl(x) scanf("%lld", &x)
#define sc(x) scanf("%d", &x)
#define sc1(x,y) scanf("%d %d", &x,&y)
#define INF (1 << 30)
#define LL_INF (1LL << 62)
const ll mod = 1e9 + 7;
const ll N = 1e5 + 10;
#define MAX 1000000000
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    //fastio;
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vll v(n);

        rep(i, n) cin >> v[i];

        ll total = accumulate(all(v), 0LL);

        if(total <=k ){
            cout << n << '\n';
        }
        else{
            ll sum = 0, i = 0, j = n-1, sunk = 0;

            while(i <= j){
                if(i == j){
                    if((sum + v[i]) > k) break;
                    else{
                        sum += v[i];
                        ++sunk;
                        ++i;
                        --j;
                    }
                }
                else{
                    if((sum + v[i] + v[j]) <= k ){
                        if(v[i] < v[j]){
                            sum += (v[i])*2;
                            v[j] -= v[i];
                            ++i;
                            ++sunk;

                        }
                        else if(v[j] < v[i]){
                            sum += (v[j])*2;
                            v[i] -= v[j];
                            --j;
                            ++sunk;
                        }
                        else if(v[i] == v[j]){
                            sunk += 2;
                            sum += (v[i] + v[j]);
                            ++i;
                            --j;
                        }
                    }
                    else{
                        break;
                    }
                }
            }

            k -= sum;


            if(i == j){
                v[i] -= k;
                if(v[i] <= 0) ++sunk;
            }
            else{
                while(i <= j){
                    if(v[i] < v[j] and k >= (v[i]*2)){
                        k -= (v[i])*2;
                        v[j] -= v[i];
                        ++i;
                        ++sunk;
                    }
                    else if(v[j] < v[i] and k >= (v[j]*2)){
                        k -= (v[j])*2;
                        v[i] -= v[j];
                        --j;
                        ++sunk;
                    }
                    else if(v[i] == v[j] and (k>= (v[i] + v[j]))){

                        sunk += 2;
                        k -= (v[i] + v[j]);
                        ++i;
                        --j;
                    }
                    else{
                        break;
                    }

                }

                int half = k/2;
                v[i] -= half;
                v[j] -= half;
                if(k%2 == 1) v[i] -=1;

                if(v[i] <= 0) ++sunk;

                if(v[j] <= 0) ++sunk;


            }

            cout << sunk << '\n';

        }

    }
    return 0;
}

