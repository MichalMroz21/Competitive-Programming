class Solution {
public:
    int titleToNumber(string columnTitle) {
        
        int answer{};

        for(int i=0; i<columnTitle.size(); i++){

            answer *= 26;
            answer += (columnTitle[i] - 'A' + 1);

        }

        return answer;

    }
};