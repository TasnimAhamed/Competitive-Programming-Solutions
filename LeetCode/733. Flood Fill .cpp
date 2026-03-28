// Version 1
class Solution {
    public:
        void dfs(int i, int j, int initColor, int newColor, vector<vector<int>> &image){
            int n = image.size();
            int m = image[0].size();

            if( i < 0 or j < 0) return;
            if( i >= n or j >= m) return;

            if(image[i][j] != initColor) return;

            image[i][j] = newColor;

            dfs(i-1, j, initColor, newColor, image);
            dfs(i+1, j, initColor, newColor, image);
            dfs(i, j-1, initColor, newColor, image);
            dfs(i, j+1, initColor, newColor, image);

        }


        vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
            int initColor = image[sr][sc];
            if(initColor != color)dfs(sr, sc, initColor, color, image);

            return image;
        }
};

// Version 2

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int initColor = image[sr][sc];

        function<void(int, int)> dfs = [&] (int i, int j) {
            if (i < 0 or j < 0) {
                return;
            }
            if (i >= n or j >= m) {
                return;
            }
            if (image[i][j] != initColor) {
                return;
            }
            image[i][j]= color;

            dfs(i + 1, j);
            dfs(i - 1, j);
            dfs(i, j + 1);
            dfs(i, j - 1);
        };

        if (initColor != color) {
            dfs(sr, sc);
        }

        return image;
    }
};