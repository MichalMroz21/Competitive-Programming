class Solution {
public:
    vector<int> circularGameLosers(int n, int k) {

        unordered_map<int, bool> visited{};

        int currFriend = 1, turn = 1;

        while(visited[currFriend] == false){

            visited[currFriend] = true;

            currFriend += turn * k;

            if(currFriend % n != 0) currFriend %= n;     
            else currFriend = n;
            
            turn++;
        }

        vector<int> ans{};

        for(int i = 1; i <= n; i++){
            if(visited[i] == false) 
                ans.push_back(i);
        }

        return ans;
    }
};