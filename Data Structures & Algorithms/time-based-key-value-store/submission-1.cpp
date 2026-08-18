class TimeMap {
    unordered_map<string, vector<pair<int, string>>> mmap;
public:
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        mmap[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        auto& values = mmap[key];
        int l = 0, r = values.size()-1;
        string ret = "";
        while(l<=r){
            int mid = (l+r)/2;
            if(values[mid].first <= timestamp){
                ret = values[mid].second;
                l = mid+1;
            }
            else
                r = mid-1;
        }
        return ret;
    }
};
