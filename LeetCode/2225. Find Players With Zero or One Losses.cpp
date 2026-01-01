class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int, pair<int,int>> mp;
        
        vector<int> winner, loser;

        for(auto pr : matches){
            mp[pr[0]].first++;
            mp[pr[1]].second++;
        }

        for(auto pr : mp){
            if(pr.second.second == 0){
                winner.push_back(pr.first);
            }
            if(pr.second.second == 1){
                loser.push_back(pr.first);
            }
        }


        return {winner, loser};
    }
};