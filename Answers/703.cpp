class KthLargest {
public:
    int k{};
    priority_queue<int, vector<int>, greater<int>> maxHeap{};

    KthLargest(int k, vector<int>& nums) {

        for(auto i : nums) maxHeap.push(i);

        this->k = k;

    }
    
    int add(int val) { 

        maxHeap.push(val);
        while(maxHeap.size() > this->k) maxHeap.pop();

        return maxHeap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */