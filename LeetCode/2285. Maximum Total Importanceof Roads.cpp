// optimized
class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> inDeg(n);

        for(auto road : roads){
            for(auto v : road) inDeg[v]++;
        }
        sort(inDeg.begin(), inDeg.end());
        
        long long int sum = 0;
        for(int i = 1; i <= n; i++){
            sum += (1LL * i * inDeg[i - 1]);
        }

        return sum;
    }
};