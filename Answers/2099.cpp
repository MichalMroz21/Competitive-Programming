class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
          priority_queue<pair<int, int>> pq{};

          for(int i = 0; i < nums.size(); i++){
              pq.push({-nums[i], i});
              if(pq.size() > k) pq.pop();
          }

          vector<int> ans{};

          priority_queue<pair<int, int>> pqIndex{};

          while(!pq.empty()){
              
              auto curr = pq.top();
              curr.second *= -1;
              swap(curr.first, curr.second);

              pqIndex.push(curr);
              pq.pop();
          }

          while(!pqIndex.empty()){
              ans.push_back(-pqIndex.top().second);
              pqIndex.pop();
          }

          return ans;
    }
};