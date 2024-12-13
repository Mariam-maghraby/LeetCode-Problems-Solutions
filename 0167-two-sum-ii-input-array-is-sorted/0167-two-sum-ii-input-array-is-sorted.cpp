class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res(2);
        map<int, int> mp;
        for(int i=0; i<numbers.size(); i++){
            int req = target-numbers[i];
            if(!mp.count(req) > 0){
            mp[numbers[i]] = i;
            }else{
                res[0] = mp[req]+1;
                res[1] = i+1;
                return res;
            }
        }
        return res;
    }
};