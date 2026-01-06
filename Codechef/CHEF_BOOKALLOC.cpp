#include<bits/stdc++.h>
using namespace std;
using ll = long long;


int findPages(vector<int>& arr, int n, int m) {
    int lo = *max_element(arr.begin(), arr.end()), hi = accumulate(arr.begin(), arr.end(), 0);
    
    auto OK = [&] (int mid) -> int{
        int cnt = 0,  i = 0, sum = 0;
        while( i < n){
            if((sum + arr[i]) <= m){
                sum += arr[i];
            }
            else{
            	cnt++;
            	sum = arr[i];
            }
            i++;
        }
        if(sum) ++cnt;
        return cnt;
    };
    
    int ans = -1;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        int cnt = OK(mid);
        
        if(cnt == m){
            ans = mid;
            hi = mid - 1;
        }
        else if(cnt > m){
            lo = mid + 1;
        }
        else{
        	ans = mid;
            hi = mid - 1;
        }
    }

    return ans;
}


void solve(){
    int n, m; cin >> n >> m;
    vector<int> v(n);

    for(auto &x : v) cin >> x;

    cout << findPages(v, n, m) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }

    return 0;

}