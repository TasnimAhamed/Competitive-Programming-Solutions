class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int lands = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        function<void(int, int)> dfs = [&] (int row, int col){
            if (row < 0 or col < 0 or row >= rows or col >= cols or grid[row][col] == '0') {
                return;
            }
            grid[row][col] = '0';
            dfs(row + 1, col);
            dfs(row - 1, col);
            dfs(row, col + 1);
            dfs(row, col - 1);
        };

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (grid[i][j] == '1') {
                    ++lands;
                    dfs(i, j);
                }
            }
        }

        return lands;
    }
};