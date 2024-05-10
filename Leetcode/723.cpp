class Solution {
public:
    vector<vector<int>> candyCrush(vector<vector<int>>& b) 
    {        
        for (r = b.size(), c = b[0].size(); crush(b); dropBoard(b));        
        return b;
    }
    
private:
    
    int r, c; // row, column
    
    // crush all crushable candies and return true if crushable
    bool crush(vector<vector<int>>& b) 
    {
        unordered_set<int*> vcrash, hcrash;
        
        // if candy at (i,j) is crushable in dir direction
        auto crushable = [&](int i, int j, char dir) {
            if (!b[i][j]) return false;
            return dir == 'v'? 
                (i && b[i][j]==b[i-1][j] && vcrash.count(&b[i-1][j]) || i+2<r && b[i+1][j]==b[i][j] && b[i+2][j]==b[i][j]) 
               :(j && b[i][j]==b[i][j-1] && hcrash.count(&b[i][j-1]) || j+2<c && b[i][j+1]==b[i][j] && b[i][j+2]==b[i][j]);
        };
        
        for (int i = 0; i < r; ++i)
            for (int j = 0; j < c; ++j) {
                if (crushable(i, j, 'v')) vcrash.insert(&b[i][j]);
                if (crushable(i, j, 'h')) hcrash.insert(&b[i][j]);                         
            }
        
        // remove crushed candies
        for (auto& x : vcrash) *x = 0;
        for (auto& x : hcrash) *x = 0;        
        return !vcrash.empty() || !hcrash.empty();
    }
        
    // drop board vertially to fill empty cells
    void dropBoard(vector<vector<int>>& b) 
    {
        for (int j = 0; j < c; ++j)
            for (int L = r-1, R = r-1; L >= 0; )
                if (b[R][j]) L--, R--; 
                else if (!b[L][j]) L--;
                else swap(b[L--][j], b[R--][j]);
    }
};