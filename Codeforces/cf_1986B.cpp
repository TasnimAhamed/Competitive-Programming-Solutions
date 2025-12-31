#include<bits/stdc++.h>
using namespace std;
#define int long long int

int32_t main()
{
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;

        vector<vector<int>> arr(n+2, vector<int>(m+2, 0));


        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> arr[i][j];
            }
        }

//        for(int i = 0; i <= n+1; i++){
//            for(int j =0; j <= m+1; j++){
//                cout << arr[i][j] << ' ';
//            }
//            cout <<  '\n';
//        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                int mx = max({arr[i-1][j], arr[i+1][j], arr[i][j-1], arr[i][j+1]});
                if((arr[i-1][j] < arr[i][j]) && (arr[i+1][j] < arr[i][j]) && (arr[i][j-1] < arr[i][j]) && (arr[i][j+1] < arr[i][j])){
                    arr[i][j] = mx;
                }
            }
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cout << arr[i][j];
                if(j < m) cout << " ";
                else cout <<  '\n';
            }
        }

    }
    return 0;
}

