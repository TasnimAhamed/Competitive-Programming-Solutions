class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        int idx[201]={0};

        for(auto num : nums){
            ++idx[num];
        }

        int mx = INT_MIN;
        for(int i = 1; i<=200; i++){
            mx = max(mx, idx[i]);
        }
        vector<vector<int>> ans;

        for(int i = 0; i < mx; i++){
            vector<int> temp;
            for(int j = 1; j <=200; j++){
                if(idx[j]){
                    temp.push_back(j);
                    --idx[j];
                }
            }

            ans.push_back(temp);
        }

        return ans;

    }
};