class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> solution;

        map<string, vector<string>>mp;
        vector<string> copyStrs;
        for(int i=0; i<strs.size(); i++){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            copyStrs.push_back(sorted);
        }
        
        for(int i=0; i<copyStrs.size(); i++){
            string sorted = strs[i];
            sort(sorted.begin(), sorted.end());
            if(copyStrs[i] == sorted){
                mp[copyStrs[i]].push_back(strs[i]);
            }
        }
        for (auto i = mp.begin(); i != mp.end(); i++){
            solution.push_back(i->second);
        }
        return solution;  
    }
};