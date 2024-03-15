class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {

        int apples = accumulate(apple.begin(), apple.end(), 0);

        sort(capacity.begin(), capacity.end());

        int j = capacity.size() - 1;

        while(apples > 0){
            apples -= capacity[j--];
        }

        return capacity.size() - j - 1;
    }
};