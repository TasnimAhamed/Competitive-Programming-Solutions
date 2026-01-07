class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> scores;
        for (auto op : operations) {
            if(op != "+" and op != "D" and op != "C") {
                int num = stoi(op);
                scores.push(num);
            }
            else{
                if(op == "+") {
                    int ff = scores.top();
                    scores.pop();
                    int ss = scores.top();
                    scores.push(ff);
                    scores.push(ff + ss);

                }
                else if(op == "D") {
                    int ff = scores.top();
                    scores.push(2 * ff);
                }
                else {
                    scores.pop();
                }
            }
        }
        int total_sum = 0;
        while(!scores.empty()) {
            total_sum += scores.top();
            scores.pop();
        }
        return total_sum;
    }
};