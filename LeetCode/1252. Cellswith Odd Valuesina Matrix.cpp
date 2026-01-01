class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int mat[m][n];
        memset(mat, 0,  sizeof(mat));
        
        for(auto indice : indices){
            for(int i = 0; i< n; i++){
                ++mat[indice[0]][i];
            }
            for(int i = 0; i< m; i++){
                ++mat[i][indice[1]];
            }
        }

        int cnt = 0;

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j]&1) ++cnt;
            }
        }

        return cnt;
    }
};