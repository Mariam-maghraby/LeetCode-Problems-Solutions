class LRUCache {
public:
    list<int> mruKeys;
    int lruKey;
    int capacity;
    unordered_map<int,pair<int,list<int>::iterator>>mp;
    LRUCache(int capacity) {
        this->mp.reserve(capacity);
        this->capacity = capacity;

    }
    void arrangeLRU(int key) {
        //arrange mruKeys & update lruKey
        // if key exists remove
        // then insert in the front
        mruKeys.erase(mp[key].second);
        mruKeys.push_front(key);
        mp[key].second = mruKeys.begin();
        lruKey= mruKeys.back();
    }

    void removeLRU(){
        mruKeys.erase(mp[lruKey].second);
        mp.erase(lruKey);
    }
    int get(int key) {
        auto it = mp.find(key);
        if(it != mp.end()){
            arrangeLRU(key);
            return it->second.first;
        }
        return -1;
    }
    void put(int key, int value) {
            if(get(key) != -1){
                mp[key]={value, mruKeys.begin()};
            }else{
                mruKeys.push_front(key);
                if(mp.size()<capacity){
                    mp.insert({key, {value, mruKeys.begin()}});
                }else{
                    //remove LRU element
                    //then add the new key with its value 
                    removeLRU();
                    mp.insert({key, {value, mruKeys.begin()}});
                }
            }
            arrangeLRU(key);
        }

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna