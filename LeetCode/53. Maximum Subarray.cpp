class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN, curr = 0;
        for(auto& num : nums){
            curr +=num;
            if(curr < 0 ) curr = 0;
            if(curr > mx){
                mx = curr;
            }
        }

        return mx;
    }
};


/*
Kadens Algorithm

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN, curr = 0;
        for(auto& num : nums){
            curr +=num;
            mx = max( curr, mx);
            curr = max(curr, 0);
        }

        return mx;
    }
};

*/


/*
Alternate Solution Using Prefix Sum

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n);
        for(int i = 0; i < n; i++){
            pre[i] += nums[i] + (i == 0 ? 0 : pre[i-1]);
        }

        int mi  = 0;
        int mx  = INT_MIN;
        for(auto x : pre){
            mx = max(mx, x - mi);
            mi = min(mi, x);
        }

        return mx;



    }
};


*/