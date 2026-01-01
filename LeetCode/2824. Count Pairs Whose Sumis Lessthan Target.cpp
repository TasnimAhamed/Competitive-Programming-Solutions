// Brute Forces

class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;

        for(int i = 0; i < nums.size(); i++){
            for(int  j = i+1; j < nums.size(); j++){
                if((nums[i] + nums[j]) < target) ++cnt;
            }
        }

        return cnt;
    }
};



// Two Pointer Methods
class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int cnt = 0;
        sort(nums.begin(), nums.end());

        int st = 0, en = nums.size() - 1;       
        for(auto x : nums) cout << x << ' ';
        cout << '\n';

        while(st < en){
            int sum = nums[st] + nums[en];
            cout << sum << '\n';
            if( sum < target){
                cnt += (en - st);
                ++st;
            }
            else if(sum >= target) --en;
            else ++st;
        }

        return cnt;
    }
};