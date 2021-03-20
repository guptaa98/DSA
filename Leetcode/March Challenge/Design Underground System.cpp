class UndergroundSystem {
public:
    //id,(entry time,entry station)
    map <int,pair<int,string>> entry;
    //(entry stn,exit stn), sum of time travel
    map <pair<string,string>,int> sum;
    //(entry stn,exit stn), count
    map <pair<string,string>,int> count;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) 
    {
        entry[id] = {t,stationName};
    }
    
    void checkOut(int id, string stationName, int t) {
        double diff = (t - entry[id].first) ;
        sum[{entry[id].second, stationName}] += diff;
        count[{entry[id].second, stationName}] += 1;
        
        entry.erase(id);
    }
    
    double getAverageTime(string startStation, string endStation) {
        return (double(sum[{startStation, endStation}]) / count[{startStation, endStation}]);
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
