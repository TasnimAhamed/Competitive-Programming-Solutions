// Gready Approace

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();
        long long int  sum = 0;
        
        for(auto c : chalk) sum += c;
        
        k %= sum;
        int idx = -1;
        for(int i = 0; i < n;  i++){
            k = k - chalk[i];
            if(k < 0){
                idx = i;
                break;
            }
        }

        return idx;

    }
};

// Binary Search

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();

        vector<long long int> pre(n,0);

        for(int i = 0; i < n; i++){
            i == 0 ? pre[i] = chalk[i] : pre[i] = pre[i-1] + chalk[i];
        } 
        
        k %= pre[n-1];

        int st = 0, en = n-1, ans;
        while(st <= en){

            int mid = st + (en - st)/2;

            if(pre[mid] <= k ){
                st = mid +1;
            }
            else{
                ans = mid;
                en = mid - 1;
            }

        }

        return ans; 

    }
};

// Solution usign UPPER BOUND

class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        int n = chalk.size();

        vector<long long int> pre(n,0);

        for(int i = 0; i < n; i++){
            i == 0 ? pre[i] = chalk[i] : pre[i] = pre[i-1] + chalk[i];
        } 
        
        k %= pre[n-1];

        int ans = upper_bound(pre.begin(), pre.end(), k) - pre.begin();

        return ans; 

    }
};