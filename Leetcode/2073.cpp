class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans{}, n = tickets.size(), kTime{tickets[k]};

        for(int i = 0; i < n; i++) {
            if(i <= k) ans += min(tickets[i], kTime);
            else ans += min(kTime - 1, tickets[i]);
        }

        return ans;
    }
};