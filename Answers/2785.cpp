class Solution {
public:

    string sortVowels(string s) {
        vector<int> cntMap(10);

        unordered_map<char, int> vowelMap{{'A', 1}, {'E', 2}, {'I', 3}, {'O', 4}, {'U', 5}, {'a', 6}, {'e', 7}, {'i', 8}, {'o', 9}, {'u', 10}};
        unordered_map<int, char> vowelMapRev{{1, 'A'}, {2, 'E'}, {3, 'I'}, {4, 'O'}, {5, 'U'}, {6, 'a'}, {7, 'e'}, {8, 'i'}, {9, 'o'}, {10, 'u'}};

        for(auto i : s){
            if(vowelMap[i]) 
                cntMap[vowelMap[i] - 1]++;
        }

        int j{};

        for(auto& i : s){
            if(vowelMap[toupper(i)]){
                while(j < 10 && cntMap[j] == 0) j++;
                if(j == 10) break;

                i = vowelMapRev[j + 1];
                cntMap[j]--;   
            }
        }

        return s;
    }
};