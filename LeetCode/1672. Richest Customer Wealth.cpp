class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int mx_wealth = 0;
        for (auto account : accounts) {
            int total_wealth = 0;
            for (auto wealth : account) {
                total_wealth += wealth;
            }
            mx_wealth = max(mx_wealth, total_wealth);
        }
        return mx_wealth;
    }
};