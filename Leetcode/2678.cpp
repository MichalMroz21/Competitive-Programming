class Solution {
public:
    int countSeniors(vector<string>& details) {
        
        int answer{};

        for(auto& detail : details){

            string age = detail.substr(11, 2);

            int ageNumber = (age[0] - '0') * 10 + age[1] - '0';

            answer += ageNumber > 60;

        }

        return answer;
    }
};