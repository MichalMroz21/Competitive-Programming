class Solution {
public:
    int minOperations(vector<string>& logs) {
        
        int answer{};

        for(auto& operation : logs){

            if(operation == "../" && answer > 0) answer--;
            else if(operation != "./" && operation != "../") answer++;

        }

        return answer;
    }
};