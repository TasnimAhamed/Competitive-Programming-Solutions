class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx = 0;
        
        for(auto num : nums){
            if(num != val) nums[idx++] = num;
        }

        //nums.resize(st);

        return idx;

    }
};