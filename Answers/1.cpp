class Solution {
public:

vector<int>twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> hashTable;

    for (int i = 0; i < nums.size(); i++) {
            int searchN = target - nums[i];
            if (hashTable.find(searchN) != hashTable.end() && hashTable[searchN] != i) return vector<int>{i, hashTable[searchN]};
            else hashTable[nums[i]] = i;
    }

    return vector<int>{-1, -1};
}

};
