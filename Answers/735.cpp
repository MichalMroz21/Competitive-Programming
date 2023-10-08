class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {

        stack<int> collisions{};

        for(auto& asteroid : asteroids){

            if(collisions.empty() 
            || collisions.top() < 0 && asteroid > 0 
            || asteroid > 0 && collisions.top() > 0 
            || asteroid < 0 && collisions.top() < 0) 
                {collisions.push(asteroid); continue;}

            if(abs(collisions.top()) == abs(asteroid))
                {collisions.pop(); continue;}

            if(abs(collisions.top()) > abs(asteroid)) 
                continue;

            bool dontAdd = false;

            while(!collisions.empty() && abs(collisions.top()) <= abs(asteroid) && collisions.top() > 0) {
                if(abs(collisions.top()) == abs(asteroid)) {collisions.pop(); dontAdd = true; break;}
                collisions.pop();
            }

            if((collisions.empty() || collisions.top() < 0) && dontAdd == false) collisions.push(asteroid);
        }

        vector<int> answer{};

        while(!collisions.empty()){
            answer.push_back(collisions.top());
            collisions.pop();
        }

        return vector<int>(answer.rbegin(), answer.rend());
    }
};