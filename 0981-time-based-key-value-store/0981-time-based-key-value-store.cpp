class TimeMap {
public:
    TimeMap() {
    }
    map<string,map<int,string>> mp;
    
    
    void set(string key, string value, int timestamp) {
        mp[key][timestamp]= value;
    }
    
    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end()) {
            return "";
        }
        map<int, string>& inner_map = mp.at(key);
        
        auto it = inner_map.upper_bound(timestamp);
        
        // If the iterator points to the very beginning, it means 
        // ALL stored timestamps are larger than the one we are looking for.
        if (it == inner_map.begin()) {
            return "";
        }
        
        // 3. Move the iterator back by 1 step.
        // This gives us the largest timestamp that is less than or equal to the target.
        it--;
        
        return it->second;

        // if (inner_map.find(timestamp) != inner_map.end()) {
        //     return inner_map[timestamp];
        // }
        
        // int l = 0;
        // int r = inner_map.size();
        // while(l<r){
        //     int mid =(l+r)/2;
        //     if(mid == timestamp){
        //         return inner_map[timestamp];
        //     }else{
        //         if(mid>timestamp){
        //             r  = mid-1;
        //         }else{
        //             l = mid+1;
        //         }
        //     }
        // }
        
        // return "";
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