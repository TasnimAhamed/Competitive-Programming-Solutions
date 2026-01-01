class Solution {
public:
    vector<int> closestDivisors(int num) {

        int num1 = num + 1;
        int sq1 = sqrt(num1*1.0);
        int num2 = num + 2;
        int sq2 = sqrt(num2*1.0);

        pair<int,int> pr;

        int st = sq1;

        while(st>=1){
            if( num1 % st == 0){
                pr.first = st;
                pr.second = num1/st;
                break;
            }
            --st;
        }

        st = sq2;

        while(st>=1){
            if( num2 % st == 0){
                if(abs(pr.second - pr.first) > abs(num2/st - st)){
                    pr.first = st;
                    pr.second = num2/st;
                }
                break;
            }
            --st;
        }
        //cout << pr.first << ' ' << pr.second << '\n';

        return {pr.first, pr.second};
    }
};