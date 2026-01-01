class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, en = nums.size() - 1;

        while(st <= en){
            if(nums[en] == target) return en;
            if(nums[st] == target) return st;

            if(nums[st] < target) ++st;
            else --en;
        }

        return -1;
    }
};


/*
    Alternate Solution - Binary search

    class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int st = 0, en = nums.size() - 1;

            while(st <= en){
                int mid  = st + (en - st )/2; // (st + en)/2
                if( nums[mid] == target) return mid;

                if(nums[st] <= nums[mid]){
                    if(nums[st] <= target and nums[mid] > target){
                        en = mid - 1;
                    }
                    else{
                        st = mid + 1; 
                    }
                }
                else{
                    if(nums[en] >=  target and nums[mid] < target){
                        st = mid + 1;
                    }
                    else{
                        en = mid - 1;
                    }
                }

            }

            return -1;
        }
    };



*/