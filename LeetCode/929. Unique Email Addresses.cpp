class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> set;

        for(auto email : emails){
            string temp;
            int st  = 0;
            for(int i = 0; i < email.size(); i++){
                if( email[i] == '@' or email[i] == '+') break;
                else if( email[i] == '.' ) continue;
                else temp += email[i];
            }

            while( email[st] != '@' ) ++st;
            temp += email.substr(st);

            set.insert(temp);

        }

        return set.size();

    }
};