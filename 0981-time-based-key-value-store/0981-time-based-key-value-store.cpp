class TimeMap {
public:
    TimeMap() {
    }
    map<string,vector<pair<int,string>>> mp;
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end()) {
            return "";
        }
        
        int l = 0;
        int r = mp[key].size()-1;
        string res;
        while(l<=r){
            int mid =(l+r)/2;
            if(mp[key][mid].first <= timestamp){
                res = mp[key][mid].second;
                l= mid+1;
            }else{
                
                r  = mid-1;
            }
        }
        
        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna