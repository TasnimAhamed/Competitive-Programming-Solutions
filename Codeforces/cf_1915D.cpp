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

int checkVowel(char ch){
    if( ch == 'a' || ch == 'e') return 1;
    return 0;
}

int main()
{
    //fastio;
    int t;
    cin >> t;
    while(t--){
        int n, i ;
        string s;
        cin >> n >>  s;

        vector<string> words;

        for(i = 0; i<n - 3; i++){
            string word = "";
            if( (!checkVowel(s[i]) && checkVowel(s[i+1]) && !checkVowel(s[i+2]) && checkVowel(s[i+3])) ){
                word += s[i];
                word += s[i+1];
                i+=1;
                words.pb(word);
            }else{
                word += s[i];
                word += s[i+1];
                word += s[i+2];
                i+=2;
                words.pb(word);
            }
        }
        string word = "";
        for(int j = i; i< n; i++){
            word += s[i];
        }

        words.pb(word);

        for(int i = 0; i < words.sz; i++){
            cout << words[i];
            if(i < words.sz - 1) cout << ".";
            else cout << '\n';
        }

    }
    return 0;
}

