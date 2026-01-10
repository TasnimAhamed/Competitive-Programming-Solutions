#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	vector<map<int,double>> v(n);
	for(int i = 0; i < n; i++){
        int k; cin >> k;
        auto &f = v[i];
        double p = 1/(double)k;
        for(int i = 0; i < k; i++){
            int x; cin >> x;
            f[x] += p;
        }
	}
	double ans = 0;
	for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j) continue;
            double curr = 0;
            auto &f = v[i], &f2 = v[j];
            for(auto &x : f){
                if(f2.count(x.first)){
                    curr += (x.second * f2[x.first]);
                }
            }
            ans = max(ans, curr);
        }
	}

	cout << fixed << setprecision(12) << ans << "\n";

	return 0;
}
