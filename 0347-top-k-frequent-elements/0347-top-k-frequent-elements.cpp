class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>solution;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        // create a empty vector of pairs
        vector<pair<int, int>> vec;

        // copy key-value pairs from the map to the vector
        map<int, int> :: iterator it2;
        for (it2=mp.begin(); it2!=mp.end(); it2++)
        {
            vec.push_back(make_pair(it2->first, it2->second));
        }

        sort(vec.begin(), vec.end(), [](pair<int, int>& a,
                       pair<int, int>& b) {
            return a.second > b.second;});
        while(k--){
        solution.push_back(vec[k].first);
        }
        return solution;
        
    }
};