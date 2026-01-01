class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int> flat_array;

        for(auto arr : mat){
            for(auto x : arr){
                flat_array.push_back(x);
            }
        }

        int sz = flat_array.size();
        if(sz != (r*c)) return mat;

        vector<vector<int>> ans;
        int ri = r, st = 0;
        
        while(ri--){
            int ci = c;
            vector<int> temp;
            while(ci--){
                temp.push_back(flat_array[st]);
                ++st;
            }

            ans.push_back(temp);
        }

        return ans;


    }
};

/*
    Alternate Solution


    class Solution {
        public:
            vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
                int r1 = mat.size(), c1 = mat[0].size();

                if( r1 * c1 != r * c) return mat;

                vector<int> v0(c);
                vector<vector<int>>v(r, v0);

                for(int i =0; i< r1 * c1; i++){
                    v[i/c] [i%c] = mat[i/c1][i%c1];
                }

                return v;

            }
    };



*/