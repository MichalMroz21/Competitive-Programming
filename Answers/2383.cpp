class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience, vector<int>& energy, vector<int>& experience){
        
        int neededExperience{experience[0]}, currExperienceNeeded{experience[0]};

        for(int i = 1; i < experience.size(); i++){

            neededExperience = max(neededExperience, experience[i] - currExperienceNeeded);
            currExperienceNeeded += experience[i];
            
        }

        neededExperience++;
        neededExperience -= initialExperience;

        int neededEnergy = accumulate(energy.begin(), energy.end(), 0) + 1 - initialEnergy;

        int ans{};

        if(neededExperience > 0) ans += neededExperience;
        if(neededEnergy > 0) ans += neededEnergy;

        return ans;
    }
};
