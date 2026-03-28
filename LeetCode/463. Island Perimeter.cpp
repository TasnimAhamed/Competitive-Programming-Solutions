// Version 1
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;

        auto isValid = [&] (int i, int j) {
            if (i < 0 or j < 0) {
                return false;
            }
            if (i >= rows or j >= cols) {
                return false;
            }

            return true;
        };

        function<void(int, int)> dfs = [&] (int i, int j) {
            if (i < 0 or j < 0) {
                return;
            }
            if (i >= rows or j >= cols) {
                return;
            }
            if (grid[i][j] == 0 or grid[i][j] == 2) {
                return;
            }
            ans += 4;
            if (isValid(i + 1, j) and grid[i + 1][j]) {
                --ans;
            }
            if (isValid(i - 1, j) and grid[i - 1][j]) {
                --ans;
            }
            if (isValid(i, j + 1) and grid[i][j + 1]) {
                --ans;
            }
            if (isValid(i, j - 1) and grid[i][j - 1]) {
                --ans;
            }
            grid[i][j] = 2;

            dfs(i + 1, j);
            dfs(i - 1, j);
            dfs(i, j + 1);
            dfs(i, j - 1);

        };

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    dfs(i, j);
                }
            }
        }

        return ans;
    }
};


// Version 2

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int ans = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == 1) {
                    ans += 4;
 
                    if (i + 1 < rows && grid[i + 1][j] == 1) {
                        ans -= 2;
                    }
                     
                    if (j + 1 < cols && grid[i][j + 1] == 1) {
                        ans -= 2;
                    }
                }
            }
        }

        return ans;
    }
};
