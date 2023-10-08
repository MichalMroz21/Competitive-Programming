class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        
        stack<pair<int, int>> st{};

        for(int i = 0; i < prices.size(); i++){

            while(!st.empty() && prices[i] <= st.top().second){
                prices[st.top().first] -= prices[i];
                st.pop();
            }
                
            st.push({i, prices[i]});
            
        }

        return prices;
    }
};