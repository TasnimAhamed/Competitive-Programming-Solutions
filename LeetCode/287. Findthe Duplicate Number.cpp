// Brute Force Solution - TLE MUST

// TC: O(n^2)
// SC: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n ; j++){
                if( nums[i] == nums[j]){
                    return nums[i];
                }
            }
        }

        return 1;
    }
};


// Frequency counting or Set or Map or visited array

// TC: O(n)
// SC: O(n)


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> st;
        int ans = -1;
        for(auto num : nums){
            if(st.count(num) == 0){
                st.insert(num);
            }
            else{
                ans = num;
                break;
            }
        }

        return ans;
    }
};

// Sort the array and check it with it prev one

// TC: O(n logn)
// SC: O(1)

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 1; i < n; i++){
            if( nums[i] == nums[i-1]){
                return nums[i];
            }
        }

        return 1;

    }
};