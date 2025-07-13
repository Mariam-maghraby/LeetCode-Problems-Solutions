class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string>>mp;
        vector<vector<string>> ans;
        for(int i=0; i<strs.size(); i++){
            string or_str = strs[i];
            sort(or_str.begin(), or_str.end());
            if(mp.find(or_str) != mp.end()){
                mp.at(or_str).push_back(strs[i]);
            }else{
                mp[or_str] = {strs[i]};
            }
        }

        for(auto it = mp.begin(); it != mp.end(); it++){
            ans.push_back(it->second);
        }
        return ans;
    }
};