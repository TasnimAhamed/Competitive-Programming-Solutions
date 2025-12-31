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
#define fastio ios_base::sync_with_stdio(true); cin.tie(NULL); cout.tie(NULL)
#define endl '\n'

int main()
{
    fastio;
    int t;
    sc(t);
    while(t--){
        int n;
        sc(n);
        string s[n+5];

        rep(i,n){
            cin>>s[i];
        }

        int cnt= 0;

        for(int i=0;i<n;i++){

            for(int j=0;j<i;j++){

                if(s[i][j]==s[j][i]) continue;
                else{
                    cnt+=abs(s[i][j] - s[j][i]);

                }

            }
        }
        cout<<cnt<<"\n";


    }
    return 0;
}

