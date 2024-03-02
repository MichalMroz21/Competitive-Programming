class Solution {
public:

    unordered_map<char, bool> isVowel{

        {'a', true}, {'e', true}, {'i', true}, {'o', true}, {'u', true}

    };

    string toGoatLatin(string sentence) {
        
        stringstream ss(sentence);

        string word{}, newSentence{};

        int index{1};

        while(ss >> word){

            bool beginsWithConsonant = isVowel[tolower(word[0])] == false;

            string consonant = beginsWithConsonant ? string(1, word[0]) : "",
                   addition = consonant + "ma" + string(index, 'a');

            newSentence += word.substr(0 + beginsWithConsonant) + addition + ' ';

            index++;
        }

        newSentence.pop_back();

        return newSentence;
    }
};