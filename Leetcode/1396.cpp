class UndergroundSystem {
public:

    unordered_map<int, pair<string, int>> checksIn{};
    unordered_map<string, pair<double, int>> averages{};

    UndergroundSystem() {}
    
    void checkIn(int id, string stationName, int t) {
        checksIn[id] = {stationName, t};
    }
    
    void checkOut(int id, string stationName, int t) {
        auto checkIn = checksIn[id];
        averages[checkIn.first + ',' + stationName].first += t - checkIn.second;
        averages[checkIn.first + ',' + stationName].second++;
    }
    
    double getAverageTime(string startStation, string endStation) {
        auto avg = averages[startStation + ',' + endStation];
        return avg.first / avg.second;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */