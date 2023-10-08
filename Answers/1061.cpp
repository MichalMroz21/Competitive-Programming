class Solution {
public:

    class disjoinedSet{
        private:
            unordered_map<char, char> root{}; 
        public:

            disjoinedSet(){
                for(char i = 'a'; i <= 'z'; i++) root[i] = i;
            }

            char find(char a){

                if(a == root[a]) return a;

                root[a] = find(root[a]);
                return root[a];
            }

            void unionSet(char a, char b){

                char rootFirst = find(a);
                char rootSecond = find(b);

                if(rootFirst < rootSecond) root[rootSecond] = rootFirst;

                else if(rootFirst > rootSecond) root[rootFirst] = rootSecond;

            }

    };

    string smallestEquivalentString(string s1, string s2, string baseStr) {

        disjoinedSet* ds = new disjoinedSet();

        for(int i = 0; i<s1.size(); i++) ds->unionSet(s1[i], s2[i]);

        for(int i = 0; i<baseStr.size(); i++) baseStr[i] = ds->find(baseStr[i]);

        return baseStr;
    }
};