class Solution {
public:
    string interpret(string command) {
        
        int j{};
        int n = command.size();

        for(int i = 0; i<n; i++){

            char c = command[i];
            if(c == 'G') command[j++] = 'G';

            if(c == '('){

                i++;
                c = command[i];

                if(c == ')') command[j++] = 'o';
            
                else{
                    command[j++] = 'a';
                    command[j++] = 'l';
                }

            }

        }

        command.erase(j, n - j);
        return command;

    }
};