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
        int n, m, k; cin >> n >> m >> k;

        int half = k/2;

        vi a(n), b(m), ans(k+2, 0);

        rep(i, n) cin >> a[i];
        sort(all(a));

        rep(i, m) cin >> b[i];
        sort(all(b));

        int first = 0, last = 0;

        rep(i, n){
            if(a[i] <= k){
                if(ans[a[i]] == 0){
                    ++first;
                    ans[a[i]] = -1;
                }
            }
            else{
                break;
            }
        }

        //cout << "First: " << first << '\n';

        rep(i, m){
            if(b[i] <= k){
                if(ans[b[i]] == -1 && first > half){
                    --first;
                    ++last;
                    ans[b[i]] = -2;
                }
                else{
                    if(ans[b[i]] == 0){
                        ++last;
                        ans[b[i]] = -2;
                    }
                }

            }
            else{
                break;
            }
        }

        //cout << "\nFirst: " << first << '\n';
        //cout << "Last: " << last << '\n';


        if(first == half and last == half) cout << "YES\n";
        else cout << "NO\n";


    }

    return 0;
}

