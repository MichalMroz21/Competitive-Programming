class SparseVector {
public:
    
    unordered_map<int, int> sparseMap{};

    SparseVector(vector<int> &nums) {
        
        for(int i = 0; i<nums.size(); i++) if(nums[i] != 0) sparseMap[i] = nums[i];
        
    }
    
    // Return the dotProduct of two sparse vectors
    int dotProduct(SparseVector& vec) {
        
        int dotProduct{};
        for(auto [key, value] : vec.sparseMap) dotProduct += this->sparseMap[key] * value;
        return dotProduct;

    }
};

// Your SparseVector object will be instantiated and called as such:
// SparseVector v1(nums1);
// SparseVector v2(nums2);
// int ans = v1.dotProduct(v2);