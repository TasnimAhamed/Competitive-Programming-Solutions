class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        for(int i = 0; i < matrix.size(); i++){
            for(int j  = 0; j <= i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i < matrix.size(); i++){
            for(int j  = 0; j < matrix.size()/2; j++){
                swap(matrix[i][j], matrix[i][matrix.size()-j-1]);
            }
        }

    }
};

/*
    Alternate Solution: 

    class Solution {
    public:
        void rotate(vector<vector<int>>& mat) {
            
            for(int i = 0; i < mat.size(); i++){
                for(int j  = 0; j <= i; j++){
                    swap(mat[i][j], mat[j][i]);
                }
            }

            for(int i = 0; i < mat.size(); i++){
                reverse(mat[i].begin(), mat[i].end());
            }

        }
    };

*/


/* 
    Explanation

    1 2 3 
    5 6 7
    8 9 10

    First Transpose the matrix: thats mean mat[row][col] change to mat[col][row]


    1 5 8
    2 6 9
    3 7 10

    Then Swap the first element with the last element of each row respectively.

    8 5 1
    9 6 2
    10 7 3


 */