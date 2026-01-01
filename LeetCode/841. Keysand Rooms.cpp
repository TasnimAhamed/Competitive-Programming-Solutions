class Solution {
public:
    void dfs(int u, vector<vector<int>>& rooms, vector<bool> &visited){
        visited[u] = true;
        for(auto v : rooms[u]){
            if(!visited[v]){
                dfs(v, rooms, visited);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int n = rooms.size();
        vector<bool> visited(n, false);
        stack<int> st;

        int u = 0;
        st.push(u);
        visited[u] = true;
        
        dfs(u, rooms, visited);

        for(int i = 0; i < n; i++){
            if(!visited[i]) return false;
        }

        return true;
    }
};