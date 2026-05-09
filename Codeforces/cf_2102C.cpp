#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
    int n; cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));

    int x = n / 2, y = n / 2;
    cerr << x << " " << y << "\n";
    if (n % 2 == 0) {
        --x;
        --y;
    }
    int val = 0;

    grid[x][y] = val++;

    int step = 1;

    while (val < n * n) {

        for (int i = 0; i < step && val < n * n; i++) {
            y++;
            if (x >= 0 && x < n && y >= 0 && y < n) {
                grid[x][y] = val++;
            }
        }

        for (int i = 0; i < step && val < n * n; i++) {
            x++;
            if (x >= 0 && x < n && y >= 0 && y < n) {
                grid[x][y] = val++;
            }                
        }

        step++;

        for (int i = 0; i < step && val < n * n; i++) {
            y--;
            if (x >= 0 && x < n && y >= 0 && y < n) {
                grid[x][y] = val++;
            }
        }

        for (int i = 0; i < step && val < n * n; i++) {
            x--;
            if (x >= 0 && x < n && y >= 0 && y < n)
                grid[x][y] = val++;
        }

        step++;
    }


    for (auto &row : grid) {
        for (auto x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;

}

