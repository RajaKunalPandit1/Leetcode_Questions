Output Status : 

Runtime
163 ms
Beats
49.19%
Memory
58.6 MB
Beats
70.27%

class UndergroundSystem {
public:
     unordered_map<int, pair<string, int>> checkins;
    unordered_map<string, pair<int, int>> routes;
    void checkIn(int id, string stationName, int t) {
        checkins[id] = {stationName, t};
    }
    void checkOut(int id, string stationName, int t) {
        auto [stn, start] = checkins[id];
        checkins.erase(id);
        string route = stn + "," + stationName;
        routes[route].first++, routes[route].second += t - start;
    }
    double getAverageTime(string startStation, string endStation) {
        auto& [count, sum] = routes[startStation + "," + endStation];
        return (double)sum / count;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
