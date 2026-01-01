class Solution {

int checkHappyNumber(int n){
    int sum = 0;
    while(n){
        sum += ((n%10)*(n%10));
        n/=10;
    }

    return sum;
}

public:
    bool isHappy(int n) {
        unordered_set<int> visited;

        while(true){
            n = checkHappyNumber(n);
            if(visited.count(n) == 1){
                return false;
            }
            visited.insert(n);

            if(n == 1){
                return true;
            }
        }
    }
};