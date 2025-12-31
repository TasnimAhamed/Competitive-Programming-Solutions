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

bool check_num(int n){
    while(n>0){
        int rem = n%10;
        if(!(rem == 0 or rem == 1)) return false;
        n/=10;
    }

    return true;
}

int main()
{
    //fastio;

    vector<int> binary = {
        1, 10, 11, 100, 101, 110, 111,
        1000, 1001, 1010, 1011, 1100, 1101, 1110, 1111,
        10000, 10001, 10010, 10011, 10100, 10101, 10110, 10111,
        11000, 11001, 11010, 11011, 11100, 11101, 11110, 11111,
        100000, 100001, 100010, 100011, 100100, 100101, 100110, 100111,
        101000, 101001, 101010, 101011, 101100, 101101, 101110, 101111,
        110000, 110001, 110010, 110011, 110100, 110101, 110110, 110111,
        111000, 111001, 111010, 111011, 111100, 111101, 111110, 111111
    };

    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;

        if(n == 1) cout << "YES\n";
        else if(check_num(n)) cout << "YES\n";
        else{
            for(int i =  binary.sz - 1; i >= 1; i--){
                while(n%binary[i] == 0){
                    n/=binary[i];
                    if(n < 10) break;
                }
            }

            if(n == 1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
    return 0;
}

