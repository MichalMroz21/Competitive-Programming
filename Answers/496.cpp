class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        int m = nums2.size();
        int n = nums1.size();
        
        stack<int> st{};
        unordered_map<int, int>hashMap{};

        st.push(nums2[0]);

        for(int i=1; i<m; i++){

           int curr = nums2[i];

           if(st.top() < curr){

               while(!st.empty() && st.top() < curr){

                   hashMap[st.top()] = curr;
                   st.pop();
               }

           }

           st.push(curr);

        }

        for(int i=0; i<n; i++){

            if(hashMap.find(nums1[i]) != hashMap.end()) nums1[i] = hashMap[nums1[i]];
            else nums1[i] = -1;

        }       

        return nums1;
    }
};