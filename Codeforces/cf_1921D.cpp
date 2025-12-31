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
        int n, m; cin >> n >> m;

        vll v1(n), v2(m);

        for(int i = 0; i < n; i++){
            cin >> v1[i];
        }

        for(int i = 0; i < m; i++){
            cin >> v2[i];
        }

        sort(all(v1), greater<int>());
        sort(all(v2));

        int st1 = 0, st2 = m - n, en1 = n-1, en2 = m - 1;

        ll sum = 0;

        while(st1 <= en1){
            if(st1 == en1){
                ll ans1 = llabs(v1[st1] - v2[st1]);
                ll ans2 = llabs(v1[st1] - v2[en2]);

                sum += (ans1 > ans2 ? ans1 : ans2);
                st1++;
                en1--;

               // cout << "Sum1: "<< sum << '\n';
                break;
            }

            ll ans1 = llabs(v1[st1] - v2[st1]);
            ll ans2 = llabs(v1[st1] - v2[st2]);
            sum += (ans1 > ans2 ? ans1 : ans2);

            if(st1 == st2) st2++;
            st1++;

            if(ans2 > ans1) st2++;

            //cout << "Sum: "<< sum << '\n';

            sum+= llabs(v1[en1] - v2[en2]);
            en1--;
            en2--;
            //cout << "Sum: "<< sum << '\n';

        }

        cout << sum << '\n';

    }

    return 0;
}

