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
        int n; cin >> n;
        string s; cin >> s;
        int cnt = 0;
        for(auto ch : s){
            if( ch == '1') ++cnt;
        }
        if(cnt&1) cout << "NO\n";
        else{
            string ans = "";
            rep(i,n) ans += '0';

            int i = 0, j = n - 1, paisi = 0;
            while( i < j){
                if(s[i] == '0') ++i;
                if(s[j] == '0') --j;

                if((i+1) == j and !paisi) break;

                if(s[i]=='1' and s[j] == '1'){
                    ans[i] = '1';
                    ans[j] = '1';
                    ++i;
                    --j;
                    paisi = 1;
                }
            }

            if(ans == s){
                cout << "YES\n";
            }
            else{
                cout << "NO\n";
            }

        }

    }

    return 0;
}

