class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        int n = temperatures.size();

        vector<int> ans(n);

        stack<vector<int>>st{};

        for(int i = 0; i < n; i++){
            
            int cnt{};

            while(!st.empty() && temperatures[i] > st.top()[0]){
                cnt += st.top()[2]; 
                ans[st.top()[1]] = cnt;
                st.pop();
            }

            if(!st.empty()) st.top()[2] += cnt;
            
            st.push({temperatures[i], i, 1});
            
        }

        return ans;
    }
};