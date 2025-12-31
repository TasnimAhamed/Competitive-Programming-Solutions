#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define en "\n"

bool Ok(vector<int> &v){
    int sum = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] == sum){
            return true;
        }
        else{
            sum += v[i];
        }
    }
    return false;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, tt = 1; cin >> t;
    while(t--){
        // cout << tt++ << " -> ";
        int n; cin >> n;
        vector<int> v(n);
        for(auto &x : v) cin >> x;

        if(Ok(v)){
            sort(v.begin(), v.end());
            int lo = 1, hi = n-1;
            while(lo < hi){
            	swap(v[lo], v[hi]);
            	lo+=2;
            	hi-=2;
            }
            if(Ok(v)){
            	cout << "No\n";
            }
            else{
                cout << "Yes\n";
                for(auto x : v) cout << x << " ";
                cout << "\n";
            }
        }
        else{
            cout << "Yes\n";
            for(auto x : v) cout << x << " ";
            cout << "\n";
        }
    }

    return 0;

}
