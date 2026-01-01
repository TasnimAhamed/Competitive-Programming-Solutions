class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n = edges.size();
        cout << n << '\n';
        vector<int> inDeg(n+5,0);

        for(auto it : edges){
            int u = it[0];
            int v = it[1];
            inDeg[u]++;
            inDeg[v]++;
        }
        int ans = -1;
        for(int i = 1; i <=n+1 ; i++){
            cout << i << ' ';
            if(inDeg[i] == n){
                ans = i;
                break;
            }
        }

        return ans;
    
        
    }
};