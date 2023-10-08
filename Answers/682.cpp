class Solution {
public:
    int calPoints(vector<string>& operations) {
        
        stack<int> scores{};

        for(auto i : operations){

            if(i == "+"){
                int a = scores.top();
                    scores.pop();
                    int b = scores.top();

                    scores.push(a);
                    scores.push(a + b);
            }

            else if(i == "D"){
                scores.push(scores.top() * 2);
            }

            else if(i == "C"){
                scores.pop();
            }

            else{
                scores.push(stoi(i));
            }

        }

        int scoresSum{};
        while(!scores.empty()){
            scoresSum += scores.top();
            scores.pop();
        }


        return scoresSum;
    }
};