class Solution {
public:

    void doPerform(int& points, int sum, int lower, int upper){
        if(sum < lower) points--;
        if(sum > upper) points++;
    }

    int dietPlanPerformance(vector<int>& calories, int k, int lower, int upper) {
        
        int calorieSum{}, points{}, L{};

        for(int i = 0; i < k && i < calories.size(); i++){
            calorieSum += calories[i];
        }

        doPerform(points, calorieSum, lower, upper);      

        for(int i = k; i < calories.size(); i++){

            calorieSum -= calories[L++];
            calorieSum += calories[i];

            doPerform(points, calorieSum, lower, upper);
        }

        return points;
    }
};