class Solution {
public:
    bool judgeCircle(string moves) {

        int xAxisSum{}, yAxisSum{};

        for(auto i : moves){

            switch(i){
                case 'L':{
                    xAxisSum--;
                    break;
                }

                case 'R':{
                    xAxisSum++;
                    break;
                }

                case 'U':{
                    yAxisSum++;
                    break;
                }

                case 'D':{
                    yAxisSum--;
                    break;
                }
            }

        }

        return yAxisSum == 0 && xAxisSum == 0;
    }
};