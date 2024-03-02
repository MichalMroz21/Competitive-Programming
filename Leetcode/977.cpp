class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int beginP{};
        vector<int> ret{};
        int n = nums.size();

        for(beginP=0; beginP<n; beginP++){

            int k = nums[beginP];
            if(!(k < 0)) break; 
        }

        if(beginP == n) beginP--;

        auto begin = nums.begin();
        auto end = nums.end();

        auto itL = nums.begin() + beginP - 1;
        auto itR = nums.begin() + beginP;

        while(itL != begin - 1 || itR != end){
           
            if(itL == begin - 1){
                ret.push_back(*itR * (*itR));
                itR++;
            }

            else if(itR == end){
                ret.push_back(*itL * (*itL));
                itL--;
            }

            else{
                 int sqrL = *itL * (*itL);
                 int sqrR = *itR * (*itR);
                
                if(sqrL < sqrR){

                    ret.push_back(sqrL);
                    itL--;

                }

                else{

                    ret.push_back(sqrR);
                    itR++;

                }

            }

        }

        return ret;
    }
};