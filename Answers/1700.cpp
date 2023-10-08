class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        unordered_map<int, int> studentCount{};
        int allStudents = students.size();

        for(auto i : students) studentCount[i]++;

        for(int i = 0; i < sandwiches.size(); i++){

            if(studentCount[sandwiches[i]]-- <= 0) return allStudents;
            allStudents--;
        }

        return allStudents;
    }
};