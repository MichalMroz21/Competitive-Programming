class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        priority_queue<int> maxHeap{};

        for(auto i : nums) maxHeap.push(i);

        while(k-- > 1 && maxHeap.size() > 1) maxHeap.pop();

        return maxHeap.top(); 
    }
};