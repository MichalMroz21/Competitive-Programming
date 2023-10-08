0/5

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        
        unordered_set<string> st{};

        int ans{};

        for(auto& email : emails){

            int localNameEnd = email.find('@');

            string localName{};

            for(int i = 0; i < localNameEnd; i++){
                if(email[i] == '.') continue;
                if(email[i] == '+') break;
                localName += email[i];
            }

            string filteredEmail = localName + email.substr(localNameEnd);

            st.insert(filteredEmail);
        }

        return st.size();
    }
};