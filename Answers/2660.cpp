class Solution {
public:

    int getPlayerScore(vector<int> player){

        int count{}, score{};

        for(auto i : player){

            if(count > 0){
                score += i * 2;
                count--;
            }
            else score += i;

            if(i == 10) count = 2;
        }

        return score;
    }

    int isWinner(vector<int>& player1, vector<int>& player2) {
    
        int score1 = getPlayerScore(player1),
            score2 = getPlayerScore(player2);

        return score1 > score2 ? 1 : score1 < score2 ? 2 : 0;
    }
};