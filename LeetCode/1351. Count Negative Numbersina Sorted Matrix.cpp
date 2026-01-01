// Brute force methods
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;

        for(auto items : grid){
            for(auto item : items){
                if(item < 0) ++cnt;
            }
        }
        return cnt;
    }
};

// Binary Search Approce

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt = 0;

        for(auto items : grid){
            int n = items.size();
            int lo = 0, hi = n - 1;
            int mid = 0;
            while(lo <= hi){
                mid = (lo + hi)/ 2;
                if(items[mid] < 0){
                    hi = mid - 1;
                }
                else{
                    lo = mid + 1;
                }
            }

            cnt += (n - mid - 1);
            if(items[mid] < 0) ++cnt;

        }
        return cnt;
    }
};