class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<pair<int,int>> inDeg(n, {0, 0});
        vector<int> ans(n, 0);

        for(auto road : roads){
            inDeg[road[0]].first = road[0];
            inDeg[road[0]].second++;

            inDeg[road[1]].first = road[1];
            inDeg[road[1]].second++;
        }
        sort(inDeg.rbegin(), inDeg.rend(), [](const pair<int, int>& x, const pair<int, int>& y) {
            return x.second < y.second;
        });
        int tmp = n;
        for(auto pr : inDeg){
            if(pr.first == 0 and pr.second == 0) break;
            // cout << pr.first << ' ' << pr.second << '\n';
            ans[pr.first] = tmp;
            tmp--;
        }
        
        long long int sum = 0;
        for(auto road : roads){
            sum += (ans[road[0]] + ans[road[1]]);
        }

        return sum;
    }
};