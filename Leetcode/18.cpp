struct defaultVal{

    int value = -1;

};

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

            vector<vector<int>> ret{};
            unordered_map<int, struct::defaultVal> Map{};
            
            for(int i = 0; i<nums.size(); i++) Map[nums[i]].value = i; 

            long long a = target;


            for(int i = 0; i<nums.size(); i++){

                a = target;
                a -= nums[i];

                for(int j = i + 1; j<nums.size(); j++){

                    a -= nums[j];

                    for(int k = j + 1; k < nums.size(); k++){

                        a -= nums[k];

                        if(a < numeric_limits<int>::min()) continue;
                        if(a > numeric_limits<int>::max()) continue;

                        if(Map[a].value != -1 && Map[a].value > k){
                            Map[a].value = -1;
                            vector<int> arr = {};
                            arr.push_back(nums[i]);
                            arr.push_back(nums[j]);
                            arr.push_back(nums[k]);
                            arr.push_back(a);
                            sort(arr.begin(), arr.end());
                            ret.push_back(arr);
                        }

                        a += nums[k];
                    }

                    a += nums[j];

                }

                a += nums[i];

            }

        return ret;
    }
};