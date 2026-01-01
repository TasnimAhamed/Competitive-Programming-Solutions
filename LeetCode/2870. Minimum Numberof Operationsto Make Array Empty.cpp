class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        //for(auto num : nums) cout << num << ' ';

        int cnt = 1, ans = 0;

        int lol = 1;

        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]) ++cnt;
            else{

                //cout << "cnt : " << cnt << '\n';

                if(cnt != 1){
                    ans += ceil(cnt/3.0);
                    cnt = 1;
                }
                else{
                    lol = 0;
                    break;
                }
            }
        }
        
        //cout << "cnt : " << cnt << '\n';

        if(cnt != 1){
            ans += ceil(cnt/3.0);
            cnt = 1;
        }
        else{
            lol = 0;
        }

        if(!lol) return -1;


        return ans;

    }
};

/* Alternate Soluton  */

class Solution {
public:
    int minOperations(vector<int>& nums) {
        map<int, int> mp;

        for(auto num : nums) mp[num]++;

        int ans = 0;

        for(auto pr : mp){
            if(pr.second == 1) return -1;

            ans += ceil(pr.second/3.0);
        }

        return ans;

    }
};