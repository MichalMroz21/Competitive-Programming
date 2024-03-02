class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        int n = groupSizes.size();

        unordered_map<int, vector<int>> groupedPeople{};

        for(int i = 0; i < groupSizes.size(); i++){

            groupedPeople[groupSizes[i]].push_back(i);

        }

        vector<vector<int>> answer{};
    
        int answerIndex{-1};

        for(auto [key, value] : groupedPeople){
            
            for(int i = 0; i < value.size(); i++){

                if(i % key == 0){
                    answerIndex++;
                    answer.push_back({});
                }

                answer[answerIndex].push_back(value[i]);
            }

        }

        return answer;
    }
};