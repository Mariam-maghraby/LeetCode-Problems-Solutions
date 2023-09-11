class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>solution;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int n = nums.size();
        vector<vector<int>> vec(n+1);

        for (auto it:mp)
        {
            vec[it.second].push_back(it.first);
        }

        for(int i=n; i>0; i--){
            if(solution.size() == k){
                break;
            }
            solution.insert(solution.end(),vec[i].begin(), vec[i].end());
        }
        return solution; 
    }
};