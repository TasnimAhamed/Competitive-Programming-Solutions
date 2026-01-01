class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> numbers;
        string word;

        stringstream iss(s);
        
        while(iss >> word){
            if(word[0] >= 'a' and word[0] <= 'z') continue;
            numbers.push_back(stoi(word));
        }
        for(int i = 1; i < numbers.size(); i++){
            if(numbers[i] <= numbers[i-1]) return false;
        }

        return true;

    }
};