// Brute forces Methods
class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n = nums.size(), paisi= 1;
        if(n < 3) return {};

        sort(nums.begin(), nums.end(), greater<int>());
        vector<vector<int>>ans;

        vector<int> temp;
        int cnt = 0;
        
        for(int i = 0; i<n; i++){
            if(cnt==0){
                temp.push_back(nums[i]);
                cnt++;
            }
            else{
                if((temp[0] - nums[i]) <= k){
                    temp.push_back(nums[i]);
                    ++cnt;
                }
                else{
                    paisi = 0;
                    break;
                }
            }
            if(cnt == 3){
                ans.push_back(temp);
                cnt = 0;
                temp.clear();
            }
        }
        if(paisi) return ans;

        return {};    
    }
};

/*
    A little Optimized
*/

class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size()-2; i+=3){
            if(nums[i+2] - nums[i] <=k ){
                ans.push_back({nums[i], nums[i+1], nums[i+2]});
            }
            else{
                return {};
            }
        }

        return ans;  
    }
};
