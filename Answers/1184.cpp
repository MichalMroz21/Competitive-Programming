class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        
        int distFirst{}, distSecond{};

        if(start > destination) swap(start, destination);

        for(int i = 0; i < distance.size(); i++){

            if(i >= start && i < destination) distFirst += distance[i];
            else distSecond += distance[i];

        }

        return min(distFirst, distSecond);
    }
};